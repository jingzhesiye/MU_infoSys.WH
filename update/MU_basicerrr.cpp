#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QDomComment"

//基本误差

//通过任务单号获取基本误差信息
bool MainWindow::fill_BASICERR(QString ID)
{
    if(!get_MdsTestData( ID))
    {
         return false;
    }

    return true;
}

void MainWindow::addNode_BASICERR(QString nodeName, QDomDocument &domDoc)
{
    QDomElement  domElement,projectsElement,projectElement,testDataElement;
    QDomText textNode;
    QString str1,str2;

    int rowCount,columnCount,index;
    rowCount = ui->MU_BASICERR_TblWidget->rowCount();
    columnCount = ui->MU_BASICERR_TblWidget->columnCount();

    if(rowCount <= 0)
    {
        return ;
    }

    for(int j=0;j<rowCount;j++)
    {
        for(int i=0;i<columnCount;i++)
        {
            if(!ui->MU_BASICERR_TblWidget->item(j,i))
            ui->MU_BASICERR_TblWidget->setItem(j,i, new QTableWidgetItem(""));
        }
    }

    projectsElement = domDoc.documentElement().firstChild().firstChild().toElement();
    projectElement = domDoc.createElement(nodeName);
    projectElement.setAttribute("sampleNo",struct_sampleInfo.sampleNo);
    projectElement.setAttribute("projectName",QString::fromUtf8("基本误差"));
    projectElement.setAttribute("testResult","1");
    projectsElement.appendChild( projectElement );

    for(int i =0;i<rowCount;i++)//
    {
        testDataElement = domDoc.createElement("testData");
        projectElement.appendChild( testDataElement );

        testDataElement.setAttribute("testPhase",ui->MU_BASICERR_TblWidget->item(i,11)->text());
        testDataElement.setAttribute("testGroup",ui->MU_BASICERR_TblWidget->item(i,12)->text());
        testDataElement.setAttribute("freq",ui->MU_BASICERR_TblWidget->item(i,15)->text());
        testDataElement.setAttribute("PF",ui->MU_BASICERR_TblWidget->item(i,16)->text());
        testDataElement.setAttribute("volt",ui->MU_BASICERR_TblWidget->item(i,14)->text());

        testDataElement.setAttribute("curr",ui->MU_BASICERR_TblWidget->item(i,13)->text());
        testDataElement.setAttribute("conclusion",ui->MU_BASICERR_TblWidget->item(i,22)->text());
        testDataElement.setAttribute("refTime",ui->MU_BASICERR_TblWidget->item(i,7)->text());
        testDataElement.setAttribute("strSampleID","");

        str1= ui->MU_BASICERR_TblWidget->item(i,19)->text(); //误差次数
        int simplingCount = str1.count("|")+1;

        for(int i =0;i<simplingCount;i++)
        {
            index=str1.indexOf("|");

            if(index>0)
            {
               str2 = str1.left(index);
            }
            else
            {
               str2 = str1;
            }

            str1.remove(0,(index+1));
            textNode = domDoc.createTextNode(str2);
            domElement = domDoc.createElement("error");
            domElement.appendChild(textNode);
            testDataElement.appendChild( domElement );
        }
    }
}

