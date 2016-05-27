#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QSqlQuery"
#include "QDebug"
#include "QSqlRecord"
#include "QSqlError"

//总结论
void MainWindow::addNode_sample(QString nodeName, QDomDocument &domDoc)
{
    QDomElement  domElement,sampleElement,projectsElement;
    QString  str1,str2;

    int rowCount,columnCount,index,index2;
    rowCount = ui->MU_rslt_TabWidget->rowCount();
    columnCount = ui->MU_rslt_TabWidget->columnCount();

    if(rowCount <= 0)
    {
        return  ;
    }

    for(int j=0;j<rowCount;j++)
    {
        for(int i=0;i<columnCount;i++)
        {
            if(!ui->MU_rslt_TabWidget->item(j,i))
            ui->MU_rslt_TabWidget->setItem(j,i, new QTableWidgetItem(""));
        }
    }

    sampleElement = domDoc.createElement( nodeName );
    domDoc.documentElement().appendChild( sampleElement );

    projectsElement = domDoc.documentElement().firstChild().toElement();
    domElement = domDoc.createElement("projects");
    projectsElement.appendChild( domElement );

    //qDebug()<<domDoc.toString();
    for(int i =0;i<rowCount;i++)//
    {
    #if 1
        sampleElement.setAttribute("sampleNo",ui->MU_rslt_TabWidget->item(i,0)->text());
        sampleElement.setAttribute("checkResult",ui->MU_rslt_TabWidget->item(i,15)->text());
        sampleElement.setAttribute("checkDate",ui->MU_rslt_TabWidget->item(i,10)->text());
        sampleElement.setAttribute("testMan",ui->MU_rslt_TabWidget->item(i,12)->text());
        sampleElement.setAttribute("checkMan",ui->MU_rslt_TabWidget->item(i,13)->text());

        str1 =ui->MU_rslt_TabWidget->item(i,16)->text();
        index =str1.indexOf(QString::fromUtf8("℃"));
        str2 =str1.left(index);
        str2.remove(QString::fromUtf8("温度:"));
        sampleElement.setAttribute("checkTemp",str2.simplified ());//去掉空格

        index =str1.indexOf(":",index);
        str2 =str1.remove(0,index+1);
        str2.remove("R.H.");
        sampleElement.setAttribute("checkWet",str2.simplified());

        sampleElement.setAttribute("factory",ui->MU_rslt_TabWidget->item(i,23)->text());
        sampleElement.setAttribute("dataSaveTime",ui->MU_rslt_TabWidget->item(i,11)->text());
        sampleElement.setAttribute("sourceMac",ui->MU_rslt_TabWidget->item(i,2)->text());
        sampleElement.setAttribute("targetMac",ui->MU_rslt_TabWidget->item(i,3)->text());

        //sampleElement.setAttribute("passNum",ui->MU_rslt_TabWidget->item(i,5)->text());//通道数目
        //sampleElement.setAttribute("ASDUNum",ui->MU_rslt_TabWidget->item(i,5)->text());//ASDU
        //sampleElement.setAttribute("samplingRate",ui->MU_rslt_TabWidget->item(i,5)->text());//采样率
        //sampleElement.setAttribute("ratedDelay",ui->MU_rslt_TabWidget->item(i,5)->text());//额定延时

        sampleElement.setAttribute("appId",ui->MU_rslt_TabWidget->item(i,4)->text());
        //sampleElement.setAttribute("svId",ui->MU_rslt_TabWidget->item(i,4)->text());
        sampleElement.setAttribute("synchroMode",ui->MU_rslt_TabWidget->item(i,9)->text());//同步方式

//      sampleElement.setAttribute("ANALOGRATE",ui->MU_rslt_TabWidget->item(i,5)->text());
//      sampleElement.setAttribute("ANALOGRATE",ui->MU_rslt_TabWidget->item(i,6)->text());
        sampleElement.setAttribute("checkVolt",ui->MU_rslt_TabWidget->item(i,7)->text());//额定电压
        sampleElement.setAttribute("checkCurr",ui->MU_rslt_TabWidget->item(i,8)->text());//额定电流
        sampleElement.setAttribute("startTestTime",ui->MU_rslt_TabWidget->item(i,10)->text());
        sampleElement.setAttribute("tableInterface",ui->MU_rslt_TabWidget->item(i,10)->text());//台位接口

        str1 = ui->MU_rslt_TabWidget->item(i,18)->text();
        index =str1.indexOf(QString::fromUtf8("通道数"));
        index2 =str1.indexOf(QString::fromUtf8("\n"));
        str2 =str1.left(index2+1);
        str2.remove(QString::fromUtf8("通道数"));
        sampleElement.setAttribute("passNum",str2.simplified ());

        str1.remove(index,index2+1);
        index =str1.indexOf(QString::fromUtf8("ASDU数"));
        index2 =str1.indexOf(QString::fromUtf8("\n"));
        str2 =str1.left(index2+1);
        str2.remove(QString::fromUtf8("ASDU数"));
        sampleElement.setAttribute("ASDUNum",str2.simplified ());

        str1.remove(index,index2+1);
        index =str1.indexOf(QString::fromUtf8("额定延时"));
        index2 =str1.indexOf(QString::fromUtf8("\n"));
        str2 =str1.left(index2+1);
        str2.remove(QString::fromUtf8("额定延时"));
        sampleElement.setAttribute("ratedDelay",str2.simplified ());

        str1.remove(index,index2+1);
        index =str1.indexOf(QString::fromUtf8("采样率"));
        index2 =str1.indexOf(QString::fromUtf8("\n"));
        str2 =str1.left(index2+1);
        str2.remove(QString::fromUtf8("采样率"));
        sampleElement.setAttribute("samplingRate",str2.simplified ());

        str1.remove(index,index2+1);
        index =str1.indexOf(QString::fromUtf8("台位数"));
        index2 =str1.indexOf(QString::fromUtf8("\n"));
        str2 =str1.left(index2+1);
        str2.remove(QString::fromUtf8("台位数"));
        sampleElement.setAttribute("tableInterface",str2.simplified ());

        str1.remove(index,index2+1);
        index =str1.indexOf(QString::fromUtf8("SVID"));
        index2 =str1.indexOf(QString::fromUtf8("\n"));
        str2 =str1.left(index2+1);
        str2.remove(QString::fromUtf8("SVID"));
        sampleElement.setAttribute("svId",str2.simplified ());

#endif
    }
}

