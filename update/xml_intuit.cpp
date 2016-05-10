#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QDomComment"

//外观
void MainWindow:: fill_INTUIT()
{
    int rowCount =ui->MU_intuit_TblWidget->rowCount();
    ui->MU_intuit_TblWidget->insertRow(rowCount);

    ui->MU_intuit_TblWidget->setItem(rowCount,0, new QTableWidgetItem(struct_sampleInfo.sampleNo));         //检定任务单
    ui->MU_intuit_TblWidget->setItem(rowCount,1, new QTableWidgetItem(currentTime()));
    ui->MU_intuit_TblWidget->setItem(rowCount,2, new QTableWidgetItem("1"));

}

void MainWindow::addNode_intuit(QString nodeName, QDomDocument &domDoc)
{
    QDomElement  domElement,projectsElement,projectElement;

    int rowCount,columnCount;
    rowCount = ui->MU_intuit_TblWidget->rowCount();
    columnCount = ui->MU_intuit_TblWidget->columnCount();
    if(rowCount <= 0)
    {
        return ;
    }
    for(int j=0;j<rowCount;j++)
    {
        for(int i=0;i<columnCount;i++)
        {
            if(!ui->MU_intuit_TblWidget->item(j,i))
            ui->MU_intuit_TblWidget->setItem(j,i, new QTableWidgetItem(""));
        }
    }

    projectsElement = domDoc.documentElement().firstChild().firstChild().toElement();
    projectElement = domDoc.createElement(nodeName);
    projectElement.setAttribute("sampleNo",struct_sampleInfo.sampleNo);
    projectElement.setAttribute("projectName",QString::fromUtf8("外观试验"));
   // projectElement.setAttribute("testResult",my_CONC_CODE.INTUIT);
    projectsElement.appendChild( projectElement );

    for(int i =0;i<rowCount;i++)//
    {
        projectElement.setAttribute("testResult",ui->MU_intuit_TblWidget->item(i,2)->text());

        domElement = domDoc.createElement("testData");
        projectElement.appendChild( domElement );

        domElement.setAttribute("conclusion",ui->MU_intuit_TblWidget->item(i,2)->text());
        domElement.setAttribute("refTime",ui->MU_intuit_TblWidget->item(i,1)->text());
    }
}

