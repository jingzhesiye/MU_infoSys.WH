#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QDomComment"

/******************************************************************************************
 *完整性*
 *****************************************************************************************/

bool MainWindow:: fill_integrity(QString sampleNo)
{
    int rowCount,columnCount;

    if(struct_mdsFuncData.inteResult.isEmpty())
    {
        return false;
    }

    rowCount =ui->MU_integrity_TblWidget->rowCount();
    columnCount =ui->MU_integrity_TblWidget->columnCount();

    ui->MU_integrity_TblWidget->insertRow(rowCount);
    ui->MU_integrity_TblWidget->setItem(rowCount,0, new QTableWidgetItem(sampleNo));
    ui->MU_integrity_TblWidget->setItem(rowCount,1, new QTableWidgetItem(struct_mdsFuncData.inteLoseNum ));
    ui->MU_integrity_TblWidget->setItem(rowCount,2, new QTableWidgetItem(struct_mdsFuncData.inteAllNum ));
    ui->MU_integrity_TblWidget->setItem(rowCount,3, new QTableWidgetItem(struct_mdsFuncData.inteTestTime ));
    ui->MU_integrity_TblWidget->setItem(rowCount,4, new QTableWidgetItem(JBWCSYJLDM_index(struct_mdsFuncData.inteResult) ));

    ui->MU_integrity_TblWidget->setItem(rowCount,5, new QTableWidgetItem(struct_mdsFuncData.inteStartTime  ));
    ui->MU_integrity_TblWidget->setItem(rowCount,6, new QTableWidgetItem(struct_mdsFuncData.inteEndTime  ));
    ui->MU_integrity_TblWidget->setItem(rowCount,7, new QTableWidgetItem(struct_mdsFuncData.testId  ));

    return true;
}

void MainWindow::addNode_integrity(QString nodeName, QDomDocument &domDoc)
{
    QDomElement  domElement,projectsElement,projectElement;

    int rowCount,columnCount;
    rowCount = ui->MU_integrity_TblWidget->rowCount();
    columnCount = ui->MU_integrity_TblWidget->columnCount();

    if(rowCount <= 0)
    {
        return ;
    }

    for(int j=0;j<rowCount;j++)
    {
        for(int i=0;i<columnCount;i++)
        {
            if(!ui->MU_integrity_TblWidget->item(j,i))
            ui->MU_integrity_TblWidget->setItem(j,i, new QTableWidgetItem(""));
        }
    }

    projectsElement = domDoc.documentElement().firstChild().firstChild().toElement();
    projectElement = domDoc.createElement(nodeName);
    projectElement.setAttribute("projectNo","PJ0199");
    projectElement.setAttribute("projectName",QString::fromUtf8("完整性试验"));
    projectsElement.appendChild( projectElement );

    for(int i =0;i<rowCount;i++)//
    {
        domElement = domDoc.createElement("testData");
        projectElement.appendChild( domElement );
        projectElement.setAttribute("result",ui->MU_integrity_TblWidget->item(i,4)->text());
        domElement.setAttribute("lostPoints",ui->MU_integrity_TblWidget->item(i,1)->text());
        domElement.setAttribute("totalPoints",ui->MU_integrity_TblWidget->item(i,2)->text());
        domElement.setAttribute("testTime",ui->MU_integrity_TblWidget->item(i,3)->text());
        domElement.setAttribute("startTestTime",ui->MU_integrity_TblWidget->item(i,5)->text());
        domElement.setAttribute("endTestTime",ui->MU_integrity_TblWidget->item(i,6)->text());
        //domElement.setAttribute("testPhase","/"); //testPhase
        domElement.setAttribute("conclusion",ui->MU_integrity_TblWidget->item(i,4)->text());
        domElement.setAttribute("testNum","0");

    }
}
