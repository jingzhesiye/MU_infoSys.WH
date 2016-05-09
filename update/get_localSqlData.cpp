#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "stdio.h"
#include "QDebug"
#include "QTime"

int callback(void *datas,int ncols,char **values,char **headers);
char sqlTemp[4000][100][3000];//1.数目；2.内容个数3.长度
int  sqlite_RowCnt;  //一个表的行数
int  sqlite_tableCal;//表的数目


bool MainWindow:: get_MdsTestData(QString ID)
{
    QString str1;

    str1=QString("select * from MdsTestData where testId  ='%1'").arg(ID);
    sql_exec(str1.toLatin1().data());

    int rowCount ;

    for(int j=0;j<sqlite_tableCal;j++)
    {
        rowCount = ui->MU_BASICERR_TblWidget->rowCount();
        ui->MU_BASICERR_TblWidget->insertRow(rowCount);//ID
        ui->MU_BASICERR_TblWidget->setItem(rowCount,0, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][0])));
        ui->MU_BASICERR_TblWidget->setItem(rowCount,1, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][1])));
        ui->MU_BASICERR_TblWidget->setItem(rowCount,2, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][2])));
        ui->MU_BASICERR_TblWidget->setItem(rowCount,3, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][3])));
        ui->MU_BASICERR_TblWidget->setItem(rowCount,4, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][4])));
        ui->MU_BASICERR_TblWidget->setItem(rowCount,5, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][5])));
        ui->MU_BASICERR_TblWidget->setItem(rowCount,6, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][6])));
        ui->MU_BASICERR_TblWidget->setItem(rowCount,7, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][7])));
        ui->MU_BASICERR_TblWidget->setItem(rowCount,8, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][8])));
        ui->MU_BASICERR_TblWidget->setItem(rowCount,9, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][9])));

        ui->MU_BASICERR_TblWidget->setItem(rowCount,10, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][10])));
        ui->MU_BASICERR_TblWidget->setItem(rowCount,11, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][11])));
        ui->MU_BASICERR_TblWidget->setItem(rowCount,12, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[j][12])));

         ui->MU_BASICERR_TblWidget->setItem(rowCount,13, new QTableWidgetItem(ID));
     }

    return true;

}

bool MainWindow:: get_MdsFuncData(QString ID)
{
    QString str1;

    str1=QString("select * from MdsFuncData where testId  ='%1'").arg(ID);
    sql_exec(str1.toLatin1().data());

    struct_mdsFuncData.testId           = QString(sqlTemp[0][0]);

    if(struct_mdsFuncData.testId.isEmpty())
    {
        return false;
    }

    //qDebug()<<struct_mdsFuncData.testId;
    struct_mdsFuncData.inteStartTime    = QString(sqlTemp[0][1]);
    struct_mdsFuncData.inteEndTime      = QString(sqlTemp[0][2]);
    struct_mdsFuncData.inteTestTime     = QString(sqlTemp[0][3]);
    struct_mdsFuncData.inteLoseNum      = QString(sqlTemp[0][4]);

    struct_mdsFuncData.inteAllNum       = QString(sqlTemp[0][5]);
    struct_mdsFuncData.inteResult       = QString(sqlTemp[0][6]);
    struct_mdsFuncData.transStartTime   = QString(sqlTemp[0][7]);
    struct_mdsFuncData.transEndTime     = QString(sqlTemp[0][8]);
    struct_mdsFuncData.transTestTime    = QString(sqlTemp[0][9]);

    struct_mdsFuncData.transMaxDelay    = QString(sqlTemp[0][10]);
    struct_mdsFuncData.transResult      = QString(sqlTemp[0][11]);
    struct_mdsFuncData.spaceStartTime   = QString(sqlTemp[0][12]);
    struct_mdsFuncData.spaceEndTime     = QString(sqlTemp[0][13]);
    struct_mdsFuncData.spaceTestTime    = QString(sqlTemp[0][14]);

    struct_mdsFuncData.spaceMaxDis      = QString(sqlTemp[0][15]);
    struct_mdsFuncData.spaceResult      = QString(sqlTemp[0][16]);
    struct_mdsFuncData.otherInformation = QString(sqlTemp[0][17]);

    return true;
}

//将数据库数据读取出来到表格
void MainWindow::getDataFromLocalSqlToTblWidget(QString strExec,QTableWidget * tblWidget,int columnCount)
{
    int intResult,rowCount;
    intResult= sql_exec(strExec.toLatin1().data());
    if(intResult!=SQLITE_OK)
    {
       showInformationBox(strExec+QString::fromUtf8(":error"));
       return;
    }
    rowCount = tblWidget->rowCount();

    for(int i=0;i<sqlite_tableCal;i++)
    {
        tblWidget->insertRow(i);
        for(int j=0;j<columnCount;j++)
        {
           tblWidget->setItem(i,j, new QTableWidgetItem(QString::fromLocal8Bit(sqlTemp[i][j])));
        }
    }
}
//判断本地数据库是否存在要查的条形码
bool MainWindow::isLocalBarCodeExist(QString strExec,QString strBarCode)
{
    int intResult;
    intResult= sql_exec(strExec.toLatin1().data());
    if(intResult!=SQLITE_OK)
    {
       showInformationBox(strExec+QString::fromUtf8(":error"));
       return false;
    }

    for(int i=0;i<sqlite_tableCal;i++)//查找到了才返回正确
    {
        if(strBarCode ==QString(sqlTemp[i][0])) 
         return true;
    }

return false;
}

//获取本地数据库相关信息
void MainWindow:: get_checkParameter()
{
    memset(sqlTemp, 0,sizeof(0x4fff*3000));
    //sql_exec("select * from checkParameter");
    sql_exec("Select testList.barCode,testList.Id from muList,testList where testList.MuId = muList.Id AND testList.taskNo is null AND testList.barCode is not null;");
    //sql_exec("Select * from muList,testList where testList.MuId = muList.Id AND testList.taskNo is null AND testList.barCode is not null;");

    for(int i=0;i<LocalSqlSum;i++)
    {
#if 1
        strArray[0][i]=QString(sqlTemp[i][0]);//barCode
        strArray[19][i]=QString(sqlTemp[i][1]);//ID

        //strArray[2][i]=QString(sqlTemp[i][9]);//其它测试信息
        //qDebug()<<QString::number(i)<<strArray[1][i];
        //qDebug()<<QString::fromUtf8(sqlTemp[0][i]);
#endif
        }
}


bool MainWindow::SqlTempToQstring(QString strExec,int ItemCount)
{
    if(sql_exec(strExec.toLatin1().data())!=SQLITE_OK)
    {
        return false;
    }

    for(int i=0;i<ItemCount;i++)
    {
        strArray[15][i]=QString(sqlTemp[0][i]);
        //qDebug()<<QString::number(i)<<QString(sqlTemp[0][i]);
    }

    return true;
}


bool MainWindow:: get_muList(QString strID)
{
    QString str1;

    str1=QString("select * from muList where Id   ='%1'").arg(strID);
    sql_exec(str1.toLatin1().data());

    struct_testList.Id           = QString(sqlTemp[0][0]);

    if(struct_testList.Id.isEmpty())
    {
        return false;
    }

    struct_muList.bianHao              = QString(sqlTemp[0][1]);
    struct_muList.xinHao               = QString(sqlTemp[0][2]);
    struct_muList.changjia             = QString(sqlTemp[0][3]);
    struct_muList.otherInformation     = QString(sqlTemp[0][4]);

    return true;
}

bool MainWindow:: get_testList(QString strID)
{
    QString str1;

    str1=QString("select * from testList where Id   ='%1'").arg(strID);
    sql_exec(str1.toLatin1().data());

    struct_testList.Id           = QString(sqlTemp[0][0]);

    if(struct_testList.Id.isEmpty())
    {
        return false;
    }

    //qDebug()<<struct_mdsFuncData.testId;
    struct_testList.MuId               = QString(sqlTemp[0][1]);
    struct_testList.sourMac            = QString(sqlTemp[0][2]);
    struct_testList.descMac            = QString(sqlTemp[0][3]);
    struct_testList.appid              = QString(sqlTemp[0][4]);

    struct_testList.ANALOGRATE_V       = QString(sqlTemp[0][5]);
    struct_testList.ANALOGRATE_I       = QString(sqlTemp[0][6]);
    struct_testList.VOLTAGERANGE       = QString(sqlTemp[0][7]);
    struct_testList.CURRENTRANGE       = QString(sqlTemp[0][8]);
    struct_testList.SYNTYPE            = QString(sqlTemp[0][9]);//同步

    //qDebug()<<struct_testList.SYNTYPE;
    struct_testList.startTestTime      = QString(sqlTemp[0][10]);
    struct_testList.dataSaveTime       = QString(sqlTemp[0][11]);
    struct_testList.tester             = QString(sqlTemp[0][12]);
    struct_testList.auditor            = QString(sqlTemp[0][13]);
    struct_testList.AuditState         = QString(sqlTemp[0][14]);

    struct_testList.result             = QString(sqlTemp[0][15]);
    struct_testList.environment        = QString(sqlTemp[0][16]);
    struct_testList.protocolData       = QString(sqlTemp[0][17]);
    struct_testList.otherInformation   = QString(sqlTemp[0][18]);
    struct_testList.barCode            = QString(sqlTemp[0][19]);

    struct_testList.taskNo             = QString(sqlTemp[0][20]);

    return true;
}



int MainWindow::sql_exec(const char *sql)
{
    char *zErr;
    int intResult;
    sqlite_tableCal=0;
    memset(sqlTemp, 0,sizeof(1000*1000));
    intResult = sqlite3_exec(localsqliteDB,sql,callback,NULL,&zErr);

    LocalSqlSum = sqlite_tableCal;

    return intResult;

}

#if 1
 int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
  sqlite_RowCnt  =argc;

  for( int i = 0; i < argc; i++ )
  {
      if(argv[i]==NULL)
      {
          sqlTemp[sqlite_tableCal][i]=="0";
      }
      else
      {
          strcpy(sqlTemp[sqlite_tableCal][i], argv[i] );
      }
  }

    #if 0
      for(int i=0; i<argc; i++)
      {
          printf("%s = %s\n", azColName[i], sqlTemp[i][0] ?  sqlTemp[i][0] : "NULL");
      }
    #endif

    #if 0
      for(int i=0; i<argc; i++)
      {
          printf("i==%d %s = %s\n", i,azColName[i], sqlTemp[sqlite_tableCal][i] ?  sqlTemp[sqlite_tableCal][i] : "NULL");
      }
    #endif

//  printf("sqlite_RowCnt==%d \n",   sqlite_RowCnt);
//  printf("sqlite_tableCal==%d \n", sqlite_tableCal);
//  fflush ( stdout ) ;
  sqlite_tableCal++;
  return 0;
}
#endif


