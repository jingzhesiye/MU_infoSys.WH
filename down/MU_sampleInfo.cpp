#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

//解析下载到的信息,和四线一库不一样
void MainWindow::analyze_sampleInfo(const QDomDocument domDoc)
{
    QString tagName ="sample";
    if(!search_domNode(tagName,domDoc))
    {
        showInformationBox("no sample");
        return;
    }

    int rowCount=ui->MU_sampleInfo_TblWidget->rowCount();
    ui->MU_sampleInfo_TblWidget->insertRow(rowCount);

    //ui->MU_METER_TblWidget->insertRow(rowCount);


    ui->MU_sampleInfo_TblWidget->setItem(rowCount,0, new QTableWidgetItem(g_map.value("sampleNo")));
    //ui->MU_METER_TblWidget->setItem(rowCount,2, new QTableWidgetItem(g_map.value("sampleNo")));


    ui->MU_sampleInfo_TblWidget->setItem(rowCount,1, new QTableWidgetItem(g_map.value("tableType")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,2, new QTableWidgetItem(g_map.value("phaseType")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,3, new QTableWidgetItem(g_map.value("nominalVoltage")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,4, new QTableWidgetItem(g_map.value("nominalCurrent")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,5, new QTableWidgetItem(g_map.value("sampleType")));

    ui->MU_sampleInfo_TblWidget->setItem(rowCount,6, new QTableWidgetItem(g_map.value("nominalConstant")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,7, new QTableWidgetItem(g_map.value("reactiveConstant")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,8, new QTableWidgetItem(g_map.value("activeLevel")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,9, new QTableWidgetItem(g_map.value("reactiveLevel")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,10, new QTableWidgetItem(g_map.value("freq")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,11, new QTableWidgetItem(g_map.value("inputMode")));

    ui->MU_sampleInfo_TblWidget->setItem(rowCount,12, new QTableWidgetItem(g_map.value("isEmulator")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,13, new QTableWidgetItem(g_map.value("measurementDirection")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,14, new QTableWidgetItem(g_map.value("sampleName")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,15, new QTableWidgetItem(g_map.value("redSeal")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,16, new QTableWidgetItem(g_map.value("producer")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,17, new QTableWidgetItem(g_map.value("sampleUserName")));

    ui->MU_sampleInfo_TblWidget->setItem(rowCount,18, new QTableWidgetItem(g_map.value("sampleManuNo")));
    //ui->MU_METER_TblWidget->setItem(rowCount,4, new QTableWidgetItem(g_map.value("sampleManuNo")));
    ui->MU_sampleInfo_TblWidget->setItem(rowCount,19, new QTableWidgetItem(g_map.value("sampleSeal")));

}

void  MainWindow:: save_sampleInfo()
{
    QString strExec;
    QByteArray byteArray;
    int rowCount ,columnCount,intResult;

    rowCount = ui->MU_sampleInfo_TblWidget->rowCount();
    columnCount = ui->MU_sampleInfo_TblWidget->columnCount();

    for(int j=0;j<rowCount;j++)
    {
        for(int i=0;i<columnCount;i++)
        {
            if(!ui->MU_sampleInfo_TblWidget->item(j,i))
            ui->MU_sampleInfo_TblWidget->setItem(j,i, new QTableWidgetItem(""));
        }
    }

    for(int i=0;i<rowCount;i++)
    {
        strExec =  QString("INSERT INTO sampleInfo values( '%1','%2','%3','%4','%5','%6','%7','%8','%9','%10','%11','%12','%13','%14','%15','%16','%17','%18','%19','%20','%21')")
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,0)->text())//bar_code;
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,1)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,2)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,3)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,4)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,5)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,6)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,7)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,8)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,9)->text())//10
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,10)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,11)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,12)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,13)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,14)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,15)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,16)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,17)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,18)->text())
                    .arg(ui->MU_sampleInfo_TblWidget->item(i,19)->text())
                    .arg("0");

        byteArray = strExec.toLocal8Bit();
        intResult= sql_exec(byteArray.data());
        if(intResult!=SQLITE_OK)
        {
            showInformationBox(QString::fromUtf8("insert sampleInfo error"));
            return ;
        }
    }
}
