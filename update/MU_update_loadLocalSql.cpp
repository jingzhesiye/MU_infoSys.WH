#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "stdio.h"
#include "QDebug"
#include "QTime"

//加载当前数据库里面的下载的条形码
void MainWindow::on_MU_update_searchBarCode_LnEdit_textChanged(const QString &arg1)
{
    QString sampleNo,ID,isUpdate;
    remove_TblWdiget_Row(ui->MU_update_loadDetectTaskNo_TblWidget);
    get_checkParameter();
    int rowCount;

    for(int i=0;i<LocalSqlSum;i++)
    {
        sampleNo = strArray[0][i];
        isUpdate = strArray[1][i];
         ID      = strArray[19][i];

         //qDebug()<<sampleNo;
        if(arg1==sampleNo)
        {
            rowCount=ui->MU_update_loadDetectTaskNo_TblWidget->rowCount();
            ui->MU_update_loadDetectTaskNo_TblWidget->insertRow(rowCount);
            ui->MU_update_loadDetectTaskNo_TblWidget->setItem(rowCount,0, new QTableWidgetItem(isUpdate));
            ui->MU_update_loadDetectTaskNo_TblWidget->setItem(rowCount,1, new QTableWidgetItem(sampleNo));
            ui->MU_update_loadDetectTaskNo_TblWidget->setItem(rowCount,2, new QTableWidgetItem(ID));
            ui->MU_update_loadDetectTaskNo_TblWidget->item(rowCount,0)->setCheckState(Qt::Unchecked);
        }
    }
}

//加载当前数据库里面的下载的所有条形码
void MainWindow::on_MU_update_loadDetectTaskNo_PsBtn_clicked()
{
    remove_TblWdiget_Row(ui->MU_update_loadDetectTaskNo_TblWidget);
    get_checkParameter();

    int rowCount=ui->MU_update_loadDetectTaskNo_TblWidget->rowCount();
    int sqlItemCount=LocalSqlSum;
    for(int i=0;i<sqlItemCount;i++)
    {
        ui->MU_update_loadDetectTaskNo_TblWidget->insertRow(rowCount);
        ui->MU_update_loadDetectTaskNo_TblWidget->setItem(rowCount,0, new QTableWidgetItem(strArray[1][i]));
        ui->MU_update_loadDetectTaskNo_TblWidget->setItem(rowCount,1, new QTableWidgetItem(strArray[0][i]));
        ui->MU_update_loadDetectTaskNo_TblWidget->setItem(rowCount,2, new QTableWidgetItem(strArray[19][i]));
        ui->MU_update_loadDetectTaskNo_TblWidget->item(rowCount,0)->setCheckState(Qt::Unchecked);
    }

}

//根据任务单编号当前数据库里面的检定数据
void MainWindow::on_MU_update_loadLocalSql_PsBtn_clicked()
{
    QString sampleNo,ID,strExec;
    char intCheckCount =0;
    setCursor(QCursor(Qt::BusyCursor));

    remove_TblWdiget_Row(ui->MU_intuit_TblWidget);
    remove_TblWdiget_Row(ui->MU_basicerr_TblWidget);
    remove_TblWdiget_Row(ui->MU_rslt_TabWidget);
    remove_TblWdiget_Row(ui->MU_integrity_TblWidget);
    remove_TblWdiget_Row(ui->MU_transmission_TblWidget);
    remove_TblWdiget_Row(ui->MU_dispersion_TblWidget);

    int rowCount=ui->MU_update_loadDetectTaskNo_TblWidget->rowCount();

    for(int i =0;i<rowCount;i++)//查找出勾选的条形码
    {
        if(ui->MU_update_loadDetectTaskNo_TblWidget->item(i,0)->checkState()==Qt::Checked)
        {
            if(intCheckCount++ >= 1)
            {
                showInformationBox(QString::fromUtf8("每次只能勾选一条条形码，当前超出"));
                setCursor(QCursor(Qt::ArrowCursor));
                return;
               // qDebug()<<"fasfd";
            }

            sampleNo = ui->MU_update_loadDetectTaskNo_TblWidget->item(i,1)->text();
            ID       = ui->MU_update_loadDetectTaskNo_TblWidget->item(i,2)->text();

            strExec=QString("select * from sampleInfo where sampleNo ='%1';").arg(sampleNo);

             if(isLocalBarCodeExist(strExec,sampleNo)) //判断条形码是否有下载信息,没有的话不处理。
             {
                if(SqlTempToQstring(strExec,21))       //获取sampleInfo信息(数据库执行语句,数据库长度)
                {
                    fill_sampleInfo();                  //将sampleInfo信息填充
                    fill_BASICERR(ID);                  //基本误差
                    if(get_MdsFuncData(ID))
                    {
                        fill_integrity(sampleNo);        //完整性
                        fill_transmission(sampleNo);     //传输延时
                        fill_dispersion(sampleNo);       //离散度
                    }

                    fill_rslt(ID);             //检测总结
                    fill_INTUIT();                      //外观检查结论
                 }
             }
             else
             {
                 showInformationBox(QString::fromUtf8("查找不到下载信息"));
             }
    }  
  }
    setCursor(QCursor(Qt::ArrowCursor));
}



//加入已经存在任务单编号，则返回错
bool  MainWindow:: isTaskNoExist(QString strTaskNo,QTableWidget * tblWidget,int index)
{
    int rowCount =tblWidget->rowCount();

    if((rowCount==0)&&(strTaskNo!=""))
    {
        return true;
    }

    if(strTaskNo=="")
    {
        return false;
    }

    for(int i=0;i<rowCount;i++)
    {
        if(strTaskNo==tblWidget->item(i,index)->text())
        {
            return false;
        }
    }

    return true;
}


