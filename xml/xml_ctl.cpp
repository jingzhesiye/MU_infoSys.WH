#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QDebug"

//生成XML文件

bool MainWindow:: MU_creat_xml()
{
    QString  fileName =strUpdatePath;
    QFile *file;
    QDomDocument domDoc;

    if(file->exists(fileName))
    {
      file->remove(fileName);
    }

    QDomProcessingInstruction instruction = domDoc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"GB2312\"");
    domDoc.appendChild(instruction);
    QDomElement root = domDoc.createElement("samples"); //根节点
    domDoc.appendChild(root);

    addNode_sample("sample",domDoc);
//  addNode_intuit("project",domDoc);
    addNode_basicerr("project",domDoc);
    addNode_dispersion("project",domDoc);
    addNode_transmission("project",domDoc);
    addNode_integrity("project",domDoc);
    g_domDoc=domDoc;

    if(!save_xmlFile(fileName, domDoc))
    {
       return  false;
    }

     return  true;
    //showInformationBox(QString::fromUtf8("创建成功"));

}


//测试用
void MainWindow::on_MU_down_test_PsBtn_clicked()
{
    QStringList strList;
    QDomDocument domDoc;
    QString  strTemp;
#if 0
    if(!load_xmlFile(strDownPath,domDoc))
    {
        save_xmlFile("./sampleInfo.xml",domDoc);
        return;
    }

    //strList = get_errList(domDoc.toString());//错误信息
    strTemp =domDoc.toString();
    //qDebug()<<strTemp;


    QDomDocument domDoc2;
    domDoc2.setContent(strTemp);
    analyze_sampleInfo(domDoc2);
#endif

//    char sqlTemp[4000][100][3000];//1.数目；2.内容个数3.长度
//    qDebug()<<QString::number(sizeof(sqlTemp));
//    //analyze_sampleInfo(domDoc);

}


