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

    ui->MU_transmission_TblWidget->setItem(rowCount,5, new QTableWidgetItem(struct_mdsFuncData.transResult  ));
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
    projectElement.setAttribute("sampleNo","");
    projectElement.setAttribute("projectName",QString::fromUtf8("潜动试验"));
    //projectElement.setAttribute("testResult",my_CONC_CODE.CREEPING);
    projectsElement.appendChild( projectElement );

    for(int i =0;i<rowCount;i++)
    {
        projectElement.setAttribute("testResult",ui->MU_transmission_TblWidget->item(i,17)->text());
        domElement = domDoc.createElement("testData");
        projectElement.appendChild( domElement );

        domElement.setAttribute("testPhase","");
        domElement.setAttribute("testGroup","");
        domElement.setAttribute("freq","");
        domElement.setAttribute("PF","");
        domElement.setAttribute("volt",ui->MU_transmission_TblWidget->item(i,11)->text());

        domElement.setAttribute("curr","");
        domElement.setAttribute("conclusion",ui->MU_transmission_TblWidget->item(i,17)->text());
        domElement.setAttribute("refTime",ui->MU_transmission_TblWidget->item(i,7)->text());
        domElement.setAttribute("strSampleID","");
    }
}
