#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QDomComment"

/******************************************************************************************
传输延时测试
*****************************************************************************************/

bool MainWindow:: fill_transmission(QString sampleNo)
{
    int rowCount,columnCount;

    if(struct_mdsFuncData.transResult.isEmpty())
    {
        return false;
    }

    rowCount =ui->MU_transmission_TblWidget->rowCount();
    columnCount =ui->MU_transmission_TblWidget->columnCount();

    ui->MU_transmission_TblWidget->insertRow(rowCount);
    ui->MU_transmission_TblWidget->setItem(rowCount,0, new QTableWidgetItem(sampleNo));
    ui->MU_transmission_TblWidget->setItem(rowCount,1, new QTableWidgetItem(struct_mdsFuncData.transStartTime ));
    ui->MU_transmission_TblWidget->setItem(rowCount,2, new QTableWidgetItem(struct_mdsFuncData.transEndTime ));
    ui->MU_transmission_TblWidget->setItem(rowCount,3, new QTableWidgetItem(struct_mdsFuncData.transTestTime ));
    ui->MU_transmission_TblWidget->setItem(rowCount,4, new QTableWidgetItem(struct_mdsFuncData.transMaxDelay ));

    ui->MU_transmission_TblWidget->setItem(rowCount,5, new QTableWidgetItem(JBWCSYJLDM_index(struct_mdsFuncData.transResult)));
    ui->MU_transmission_TblWidget->setItem(rowCount,6, new QTableWidgetItem(struct_mdsFuncData.testId  ));
    return true;
}

void MainWindow::addNode_transmission(QString nodeName, QDomDocument &domDoc)
{
    QDomElement  domElement,projectsElement,projectElement;

    int rowCount,columnCount;
    rowCount = ui->MU_transmission_TblWidget->rowCount();
    columnCount = ui->MU_transmission_TblWidget->columnCount();

    if(rowCount <= 0)
    {
        return ;
    }

    for(int j=0;j<rowCount;j++)
    {
        for(int i=0;i<columnCount;i++)
        {
            if(!ui->MU_transmission_TblWidget->item(j,i))
            ui->MU_transmission_TblWidget->setItem(j,i, new QTableWidgetItem(""));
        }
    }

    projectsElement = domDoc.documentElement().firstChild().firstChild().toElement();
    projectElement = domDoc.createElement(nodeName);
    projectElement.setAttribute("projectNo","PJ0200");
    projectElement.setAttribute("projectName",QString::fromUtf8("传输延时试验"));
    projectsElement.appendChild( projectElement );

    for(int i =0;i<rowCount;i++)
    {
        domElement = domDoc.createElement("testData");
        projectElement.appendChild( domElement );

        projectElement.setAttribute("result",ui->MU_transmission_TblWidget->item(i,5)->text());
        domElement.setAttribute("conclusion",ui->MU_transmission_TblWidget->item(i,5)->text());


        domElement.setAttribute("startTestTime",ui->MU_transmission_TblWidget->item(i,1)->text());
        domElement.setAttribute("endTestTime",ui->MU_transmission_TblWidget->item(i,2)->text());
        domElement.setAttribute("testTime",ui->MU_transmission_TblWidget->item(i,3)->text());
        domElement.setAttribute("maxTransferDelay",ui->MU_transmission_TblWidget->item(i,4)->text());
        //domElement.setAttribute("testPhase","/");
         domElement.setAttribute("testNum","0");
       // domElement = domDoc.createElement("testData");


    }
}
