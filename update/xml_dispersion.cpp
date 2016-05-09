#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QDomComment"

//通过任务单号获取基本误差信息
bool MainWindow::fill_dispersion(QString sampleNo)
{
    int rowCount,columnCount;

    rowCount =ui->MU_dispersion_TblWidget->rowCount();
    columnCount =ui->MU_dispersion_TblWidget->columnCount();

    ui->MU_dispersion_TblWidget->insertRow(rowCount);
    ui->MU_dispersion_TblWidget->setItem(rowCount,0, new QTableWidgetItem(sampleNo));
    ui->MU_dispersion_TblWidget->setItem(rowCount,1, new QTableWidgetItem(struct_mdsFuncData.spaceStartTime  ));
    ui->MU_dispersion_TblWidget->setItem(rowCount,2, new QTableWidgetItem(struct_mdsFuncData.spaceEndTime  ));
    ui->MU_dispersion_TblWidget->setItem(rowCount,3, new QTableWidgetItem(struct_mdsFuncData.spaceTestTime  ));
    ui->MU_dispersion_TblWidget->setItem(rowCount,4, new QTableWidgetItem(struct_mdsFuncData.spaceMaxDis  ));

    ui->MU_dispersion_TblWidget->setItem(rowCount,5, new QTableWidgetItem(struct_mdsFuncData.spaceResult   ));
    ui->MU_dispersion_TblWidget->setItem(rowCount,6, new QTableWidgetItem(struct_mdsFuncData.testId   ));
    return true;
}
//测量重复性
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
    projectElement.setAttribute("sampleNo",my_MT_DETECT_TASK.BAR_CODE);
    projectElement.setAttribute("projectName",QString::fromUtf8("测量重复性"));
//    projectElement.setAttribute("testResult",my_CONC_CODE.MEASURE_REPEAT);
    projectsElement.appendChild( projectElement );

    for(int i =0;i<rowCount;i++)//
    {
        projectElement.setAttribute("testResult",ui->MU_dispersion_TblWidget->item(i,17)->text());

        domElement = domDoc.createElement("testData");
        projectElement.appendChild( domElement );

        domElement.setAttribute("testPhase","");
        domElement.setAttribute("testGroup","");
        domElement.setAttribute("freq","");
        domElement.setAttribute("PF","");
        domElement.setAttribute("volt","");

        domElement.setAttribute("curr","");
        domElement.setAttribute("conclusion",ui->MU_dispersion_TblWidget->item(i,17)->text());
        domElement.setAttribute("refTime",ui->MU_dispersion_TblWidget->item(i,7)->text());
        domElement.setAttribute("strSampleID","");
    }

}
