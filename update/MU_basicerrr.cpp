#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QDomComment"

//基本误差

//通过任务单号获取基本误差信息
bool MainWindow::fill_BASICERR(QString ID)
{
    //get_BASICERR_checkError("'"+ID+"'");
    for(int i =0;i<20000;i++)
    {
        //延时
    }
   // get_BASICERR_checkParameter("'"+ID+"'");
    return true;
}

//获取checkParameter相关内容
int MainWindow:: get_BASICERR_checkParameter(QString strID)
{
    QString strExec,str2,str3;
    int rowCount;

    strExec=QString("select * from checkParameter where id =%1").arg(strID);

    if(!SqlTempToQstring(strExec,11))
    {
        return 0;
    }

    rowCount =ui->EM_BASICERR_TblWidget->rowCount();
    for(int i=0;i<rowCount;i++)
    {
        if(strArray[15][0]==ui->EM_BASICERR_TblWidget->item(i,28)->text())//strArray[15][0]为本地localsql key标识符号
        {
            ui->EM_BASICERR_TblWidget->setItem(i,7,new QTableWidgetItem(strArray[15][2]));                //检定日期
            ui->EM_BASICERR_TblWidget->setItem(i,14,new QTableWidgetItem("100%Un"));//(DYDM_index("100%Un")          //电压百分百

            str2 = strArray[15][10];
            str3 = indexOfTable(str2,QString::fromUtf8("校验圈数"));
            //qDebug()<<str2;
            if(str3=="")
            {
                ui->EM_BASICERR_TblWidget->setItem(i,17,new QTableWidgetItem("5"));                      //校验圈数
            }
            else
            {
                 ui->EM_BASICERR_TblWidget->setItem(i,17,new QTableWidgetItem(str3));                     //校验圈数
            }
        }
    }
    return 0;
}

void MainWindow::addNode_BASICERR(QString nodeName, QDomDocument &domDoc)
{
    QDomElement  domElement,projectsElement,projectElement,testDataElement;
    QDomText textNode;
    QString str1,str2;

    int rowCount,columnCount,index;
    rowCount = ui->EM_BASICERR_TblWidget->rowCount();
    columnCount = ui->EM_BASICERR_TblWidget->columnCount();

    if(rowCount <= 0)
    {
        return ;
    }

    for(int j=0;j<rowCount;j++)
    {
        for(int i=0;i<columnCount;i++)
        {
            if(!ui->EM_BASICERR_TblWidget->item(j,i))
            ui->EM_BASICERR_TblWidget->setItem(j,i, new QTableWidgetItem(""));
        }
    }

    projectsElement = domDoc.documentElement().firstChild().firstChild().toElement();
    projectElement = domDoc.createElement(nodeName);
    projectElement.setAttribute("sampleNo",my_MT_DETECT_TASK.BAR_CODE);
    projectElement.setAttribute("projectName",QString::fromUtf8("基本误差"));
    projectElement.setAttribute("testResult",my_CONC_CODE.BASICERR);
    projectsElement.appendChild( projectElement );

    for(int i =0;i<rowCount;i++)//
    {
        testDataElement = domDoc.createElement("testData");
        projectElement.appendChild( testDataElement );

        testDataElement.setAttribute("testPhase",ui->EM_BASICERR_TblWidget->item(i,11)->text());
        testDataElement.setAttribute("testGroup",ui->EM_BASICERR_TblWidget->item(i,12)->text());
        testDataElement.setAttribute("freq",ui->EM_BASICERR_TblWidget->item(i,15)->text());
        testDataElement.setAttribute("PF",ui->EM_BASICERR_TblWidget->item(i,16)->text());
        testDataElement.setAttribute("volt",ui->EM_BASICERR_TblWidget->item(i,14)->text());

        testDataElement.setAttribute("curr",ui->EM_BASICERR_TblWidget->item(i,13)->text());
        testDataElement.setAttribute("conclusion",ui->EM_BASICERR_TblWidget->item(i,22)->text());
        testDataElement.setAttribute("refTime",ui->EM_BASICERR_TblWidget->item(i,7)->text());
        testDataElement.setAttribute("strSampleID","");

        str1= ui->EM_BASICERR_TblWidget->item(i,19)->text(); //误差次数
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

