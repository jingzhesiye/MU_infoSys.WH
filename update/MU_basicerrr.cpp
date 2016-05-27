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
    QDomElement  projectsElement,projectElement,testDataElement;
    QDomElement  domElement1,domElement2,domElement3,domElement4,domElement5,domElement6;
    QDomText textNode1,textNode2,textNode3,textNode4,textNode5,textNode6;
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
    projectElement.setAttribute("projectNo","PJ0202");
    projectElement.setAttribute("projectName",QString::fromUtf8("精度试验"));
    projectsElement.appendChild( projectElement);

    for(int i =0;i<rowCount;i++)//
    {
        testDataElement = domDoc.createElement("testData");
        projectElement.appendChild( testDataElement );

        testDataElement.setAttribute("chIndex",ui->MU_basicerr_TblWidget->item(i,1)->text());
        testDataElement.setAttribute("measureKind",ui->MU_basicerr_TblWidget->item(i,2)->text());//输入项
        testDataElement.setAttribute("curr",ui->MU_basicerr_TblWidget->item(i,3)->text());//检定点

//        testDataElement.setAttribute("rms_B",ui->MU_basicerr_TblWidget->item(i,4)->text());//标准有效值
//        testDataElement.setAttribute("rms_X",ui->MU_basicerr_TblWidget->item(i,5)->text());
//        testDataElement.setAttribute("freq_B",ui->MU_basicerr_TblWidget->item(i,6)->text());
//        testDataElement.setAttribute("freq_X",ui->MU_basicerr_TblWidget->item(i,7)->text());
//        testDataElement.setAttribute("vError",ui->MU_basicerr_TblWidget->item(i,8)->text());
//        testDataElement.setAttribute("qError",ui->MU_basicerr_TblWidget->item(i,9)->text());
//        testDataElement.setAttribute("freqError",ui->MU_basicerr_TblWidget->item(i,10)->text());

//        testDataElement.setAttribute("vErrorArray",ui->MU_basicerr_TblWidget->item(i,11)->text());
//        testDataElement.setAttribute("qErrorArray",ui->MU_basicerr_TblWidget->item(i,12)->text());
        testDataElement.setAttribute("conclusion",ui->MU_basicerr_TblWidget->item(i,19)->text());

        if(ui->MU_basicerr_TblWidget->item(i,19)->text()!="1")
        {
              testResult="0";
        }

        //testDataElement.setAttribute("chIndex",ui->MU_basicerr_TblWidget->item(i,12)->text());

        textNode1 = domDoc.createTextNode(ui->MU_basicerr_TblWidget->item(i,4)->text());//标准有效值
        domElement1 = domDoc.createElement("error");
        domElement1.appendChild(textNode1);
        testDataElement.appendChild(domElement1);

        textNode2 = domDoc.createTextNode(ui->MU_basicerr_TblWidget->item(i,5)->text());//被检有效值
        domElement2 = domDoc.createElement("error");
        domElement2.appendChild(textNode2);
        testDataElement.appendChild(domElement2);

        textNode3 = domDoc.createTextNode(ui->MU_basicerr_TblWidget->item(i,8)->text());//比差均值
        domElement3 = domDoc.createElement("error");
        domElement3.appendChild(textNode3);
        testDataElement.appendChild(domElement3);

        textNode4 = domDoc.createTextNode(ui->MU_basicerr_TblWidget->item(i,9)->text());//角差均值
        domElement4 = domDoc.createElement("error");
        domElement4.appendChild(textNode4);
        testDataElement.appendChild(domElement4);

        textNode5 = domDoc.createTextNode(ui->MU_basicerr_TblWidget->item(i,13)->text());//比差变差
        domElement5 = domDoc.createElement("error");
        domElement5.appendChild(textNode5);
        testDataElement.appendChild(domElement5);

        textNode6 = domDoc.createTextNode(ui->MU_basicerr_TblWidget->item(i,14)->text());//角差变差
        domElement6 = domDoc.createElement("error");
        domElement6.appendChild(textNode6);
        testDataElement.appendChild(domElement6);
    }

    projectElement.setAttribute("result",testResult);
}


//<error>标准幅值</error>
//<error>被检幅值</error>
//<error>比差均值</error>
//<error>角差均值</error>
//<error>比差变差</error>
//<error>角差变差</error>
