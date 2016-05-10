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
    projectElement.setAttribute("sampleNo",struct_sampleInfo.sampleNo);
    projectElement.setAttribute("projectName",QString::fromUtf8("传输延时"));
    projectsElement.appendChild( projectElement );

    for(int i =0;i<rowCount;i++)
    {
        projectElement.setAttribute("spaceStartTime",ui->MU_transmission_TblWidget->item(i,1)->text());
        projectElement.setAttribute("spaceEndTime",ui->MU_transmission_TblWidget->item(i,2)->text());
        projectElement.setAttribute("inteTestTime",ui->MU_transmission_TblWidget->item(i,3)->text());
        projectElement.setAttribute("transMaxDelay",ui->MU_transmission_TblWidget->item(i,4)->text());
        projectElement.setAttribute("testResult",ui->MU_transmission_TblWidget->item(i,5)->text());

        domElement = domDoc.createElement("testData");
        projectElement.appendChild( domElement );
        domElement.setAttribute("conclusion",ui->MU_transmission_TblWidget->item(i,5)->text());

    }
}
