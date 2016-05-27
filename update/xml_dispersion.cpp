#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QDomComment"

//通过任务单号获取基本误差信息
bool MainWindow::fill_dispersion(QString sampleNo)
{
    int rowCount,columnCount;

    if(struct_mdsFuncData.spaceResult.isEmpty())
    {
        return false;
    }

    rowCount =ui->MU_dispersion_TblWidget->rowCount();
    columnCount =ui->MU_dispersion_TblWidget->columnCount();

    ui->MU_dispersion_TblWidget->insertRow(rowCount);
    ui->MU_dispersion_TblWidget->setItem(rowCount,0, new QTableWidgetItem(sampleNo));
    ui->MU_dispersion_TblWidget->setItem(rowCount,1, new QTableWidgetItem(struct_mdsFuncData.spaceStartTime  ));
    ui->MU_dispersion_TblWidget->setItem(rowCount,2, new QTableWidgetItem(struct_mdsFuncData.spaceEndTime  ));
    ui->MU_dispersion_TblWidget->setItem(rowCount,3, new QTableWidgetItem(struct_mdsFuncData.spaceTestTime  ));
    ui->MU_dispersion_TblWidget->setItem(rowCount,4, new QTableWidgetItem(struct_mdsFuncData.spaceMaxDis  ));

    ui->MU_dispersion_TblWidget->setItem(rowCount,5, new QTableWidgetItem(JBWCSYJLDM_index(struct_mdsFuncData.spaceResult)));
    ui->MU_dispersion_TblWidget->setItem(rowCount,6, new QTableWidgetItem(struct_mdsFuncData.testId   ));
    return true;
}

void MainWindow::addNode_dispersion(QString nodeName, QDomDocument &domDoc)
{
    QDomElement  domElement,projectsElement,projectElement;

    int rowCount,columnCount;
    rowCount = ui->MU_dispersion_TblWidget->rowCount();
    columnCount = ui->MU_dispersion_TblWidget->columnCount();

    if(rowCount <= 0)
    {
        return ;
    }

    for(int j=0;j<rowCount;j++)
    {
        for(int i=0;i<columnCount;i++)
        {
            if(!ui->MU_dispersion_TblWidget->item(j,i))
            ui->MU_dispersion_TblWidget->setItem(j,i, new QTableWidgetItem(""));
        }
    }

    projectsElement = domDoc.documentElement().firstChild().firstChild().toElement();
    projectElement = domDoc.createElement(nodeName);
    projectElement.setAttribute("projectNo","PJ0201");
    projectElement.setAttribute("projectName",QString::fromUtf8("离散度试验"));

    projectsElement.appendChild( projectElement );

    for(int i =0;i<rowCount;i++)//
    {
        domElement = domDoc.createElement("testData");
        projectElement.appendChild( domElement );
        projectElement.setAttribute("result",ui->MU_dispersion_TblWidget->item(i,5)->text());
        domElement.setAttribute("conclusion",ui->MU_dispersion_TblWidget->item(i,5)->text());

        domElement.setAttribute("startTestTime",ui->MU_dispersion_TblWidget->item(i,1)->text());
        domElement.setAttribute("endTestTime",ui->MU_dispersion_TblWidget->item(i,2)->text());
        domElement.setAttribute("testTime",ui->MU_dispersion_TblWidget->item(i,3)->text());
        domElement.setAttribute("maxDispersion",ui->MU_dispersion_TblWidget->item(i,4)->text());
        //domElement.setAttribute("testPhase","/");
        domElement.setAttribute("testNum","0");

    }

}
