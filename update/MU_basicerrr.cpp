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

void MainWindow::addNode_basicerr(QString nodeName, QDomDocument &domDoc)
{
    QDomElement  domElement,projectsElement,projectElement,testDataElement;
    QDomText textNode;
    QString str1,str2,testResult;

    int rowCount,columnCount,index;
    rowCount = ui->MU_basicerr_TblWidget->rowCount();
    columnCount = ui->MU_basicerr_TblWidget->columnCount();
    testResult="1";
    if(rowCount <= 0)
    {
        return ;
    }

    for(int j=0;j<rowCount;j++)
    {
        for(int i=0;i<columnCount;i++)
        {
            if(!ui->MU_basicerr_TblWidget->item(j,i))
            ui->MU_basicerr_TblWidget->setItem(j,i, new QTableWidgetItem(""));
        }
    }

    projectsElement = domDoc.documentElement().firstChild().firstChild().toElement();
    projectElement = domDoc.createElement(nodeName);
    projectElement.setAttribute("sampleNo",struct_sampleInfo.sampleNo);
    projectElement.setAttribute("projectName",QString::fromUtf8("基本误差"));
    //projectElement.setAttribute("testResult","1");
    projectsElement.appendChild( projectElement );

    for(int i =0;i<rowCount;i++)//
    {
        testDataElement = domDoc.createElement("testData");
        projectElement.appendChild( testDataElement );

        testDataElement.setAttribute("chIndex",ui->MU_basicerr_TblWidget->item(i,1)->text());
        testDataElement.setAttribute("chMap",ui->MU_basicerr_TblWidget->item(i,2)->text());
        testDataElement.setAttribute("point",ui->MU_basicerr_TblWidget->item(i,3)->text());
        testDataElement.setAttribute("rms_B",ui->MU_basicerr_TblWidget->item(i,4)->text());
        testDataElement.setAttribute("rms_X",ui->MU_basicerr_TblWidget->item(i,5)->text());

        testDataElement.setAttribute("freq_B",ui->MU_basicerr_TblWidget->item(i,6)->text());
        testDataElement.setAttribute("freq_X",ui->MU_basicerr_TblWidget->item(i,7)->text());
        testDataElement.setAttribute("vError",ui->MU_basicerr_TblWidget->item(i,8)->text());
        testDataElement.setAttribute("qError",ui->MU_basicerr_TblWidget->item(i,9)->text());
        testDataElement.setAttribute("freqError",ui->MU_basicerr_TblWidget->item(i,10)->text());

        testDataElement.setAttribute("vErrorArray",ui->MU_basicerr_TblWidget->item(i,11)->text());
        testDataElement.setAttribute("qErrorArray",ui->MU_basicerr_TblWidget->item(i,12)->text());
        testDataElement.setAttribute("conclusion",ui->MU_basicerr_TblWidget->item(i,13)->text());

        if(ui->MU_basicerr_TblWidget->item(i,13)->text()!="1")
        {
              testResult="0";
        }

#if 0
        str1= ui->MU_basicerr_TblWidget->item(i,19)->text(); //误差次数
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
#endif
    }
    projectElement.setAttribute("testResult",testResult);
}

