#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QDomComment"

//外观
void MainWindow:: fill_INTUIT()
{
    int rowCount =ui->MU_INTUIT_MET_TblWidget->rowCount();
    ui->MU_INTUIT_MET_TblWidget->insertRow(rowCount);

    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,0, new QTableWidgetItem(my_MT_DETECT_TASK.DETECT_TASK_NO));         //检定任务单
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,1, new QTableWidgetItem(my_MT_DETECT_TASK.EQUIP_CATEG));            //设备类别
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,2, new QTableWidgetItem(my_MT_DETECT_TASK.SYS_NO));                 //系统编号
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,3, new QTableWidgetItem(my_CONC_CODE.DETECT_EQUIP_NO));                                    //检定线台编号
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,4, new QTableWidgetItem(""));                                            //检定单元编号
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,5, new QTableWidgetItem(""));                                            //表位编号

    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,6, new QTableWidgetItem(my_MT_DETECT_TASK.BAR_CODE));               //设备条形码
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,7, new QTableWidgetItem(strArray[3][0]));                                 //检定时间
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,8, new QTableWidgetItem("1"));                                           //第几次检定(序号)
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,9, new QTableWidgetItem("1"));                                           //检定点序号

    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,10, new QTableWidgetItem("1"));                                          //见附录I：有效标志 0：否、1：是                                           //
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,11, new QTableWidgetItem("#"));
    my_CONC_CODE.INTUIT="1";
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,12, new QTableWidgetItem(my_CONC_CODE.INTUIT));
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,13, new QTableWidgetItem(currentTime()));
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,14, new QTableWidgetItem("0"));
    ui->MU_INTUIT_MET_TblWidget->setItem(rowCount,15, new QTableWidgetItem(currentTime()));

}

void MainWindow::addNode_INTUIT(QString nodeName, QDomDocument &domDoc)
{
    QDomElement  domElement,projectsElement,projectElement;

    int rowCount,columnCount;
    rowCount = ui->MU_INTUIT_MET_TblWidget->rowCount();
    columnCount = ui->MU_INTUIT_MET_TblWidget->columnCount();
    if(rowCount <= 0)
    {
        return ;
    }
    for(int j=0;j<rowCount;j++)
    {
        for(int i=0;i<columnCount;i++)
        {
            if(!ui->MU_INTUIT_MET_TblWidget->item(j,i))
            ui->MU_INTUIT_MET_TblWidget->setItem(j,i, new QTableWidgetItem(""));
        }
    }

    projectsElement = domDoc.documentElement().firstChild().firstChild().toElement();
    projectElement = domDoc.createElement(nodeName);
    projectElement.setAttribute("sampleNo",my_MT_DETECT_TASK.BAR_CODE);
    projectElement.setAttribute("projectName",QString::fromUtf8("外观试验"));
   // projectElement.setAttribute("testResult",my_CONC_CODE.INTUIT);
    projectsElement.appendChild( projectElement );

    for(int i =0;i<rowCount;i++)//
    {
        projectElement.setAttribute("testResult",ui->MU_INTUIT_MET_TblWidget->item(i,12)->text());

        domElement = domDoc.createElement("testData");
        projectElement.appendChild( domElement );

        domElement.setAttribute("testPhase","");
        domElement.setAttribute("testGroup","");
        domElement.setAttribute("freq","");
        domElement.setAttribute("PF","");
        domElement.setAttribute("volt","");

        domElement.setAttribute("curr","");
        domElement.setAttribute("conclusion",ui->MU_INTUIT_MET_TblWidget->item(i,12)->text());
        domElement.setAttribute("refTime",ui->MU_INTUIT_MET_TblWidget->item(i,7)->text());
        domElement.setAttribute("strSampleID","");
    }
}

