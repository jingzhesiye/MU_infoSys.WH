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


//通过匹配信息监测信息里面的条形码获取条形码存放数据库的ID(条形码，返回值)
bool MainWindow::get_ID_from_checkParameter(QString  sampleNo,QString ID)
{
    QString str1;

    str1=QString("select * from checkParameter where id ='%1'").arg(ID);
    sql_exec(str1.toLatin1().data());

    for(int i=0;i<LocalSqlSum;i++)
    {
        strArray[0][0]=QString(sqlTemp[i][0]);  //ID
        strArray[1][0]=QString(sqlTemp[i][10]); //检测信息(电能表检测数据 条形码 厂家 这类信息)
        strArray[2][0]=QString(sqlTemp[i][9]);  //其它测试信息(重复性测试之类的)
        strArray[3][0]=QString(sqlTemp[i][2]);  //检定日期

        if(strArray[1][0].contains(sampleNo,Qt::CaseInsensitive))
        {
             //qDebug()<<strArray[2][0];
             return true;
        }
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


int MainWindow:: get_DETECT_RSLT_checkParameter(QString strID)
{
    qDebug()<<strID;
#if 0
    int rowCount,columnCount;
    QString strTemp,str1,str2,str3;
    str1=QString("select * from checkParameter where id =%1").arg(strID);
    sql_exec(str1.toLatin1().data());

    for(int i=0;i<sqlite_tableCal;i++)
    {
        rowCount =ui->MU_RSLT_TabWidget->rowCount();
        columnCount =ui->MU_RSLT_TabWidget->columnCount();

        ui->MU_RSLT_TabWidget->insertRow(rowCount);
        for(int j =0;j<columnCount;j++)//初始化
        {
            ui->MU_RSLT_TabWidget->setItem(rowCount,j, new QTableWidgetItem(""));
        }

        ui->MU_RSLT_TabWidget->setItem(rowCount,0, new QTableWidgetItem(my_MT_DETECT_TASK.BAR_CODE));//  //设备条形码
        ui->MU_RSLT_TabWidget->setItem(rowCount,1, new QTableWidgetItem(get_RSLT_CONC()));
        ui->MU_RSLT_TabWidget->setItem(rowCount,2, new QTableWidgetItem(QString(sqlTemp[0][2])));     //检定时间

        ui->MU_RSLT_TabWidget->setItem(rowCount,9, new QTableWidgetItem("50Hz"));
        str2 = QString::fromLocal8Bit(sqlTemp[0][10]);

        str3=get_itemFromSql(str2,QString::fromUtf8("fTemperature"),QString::fromUtf8("温度"));
        ui->MU_RSLT_TabWidget->setItem(rowCount,5,new QTableWidgetItem(str3));

        str3=get_itemFromSql(str2,QString::fromUtf8("fHumidity"),QString::fromUtf8("相对湿度"));
        ui->MU_RSLT_TabWidget->setItem(rowCount,6,new QTableWidgetItem(str3));

        str3=get_itemFromSql(str2,QString::fromUtf8("cClassGrade"),QString::fromUtf8("精度等级"));
        ui->MU_RSLT_TabWidget->setItem(rowCount,10,new QTableWidgetItem(str3));

        str3=get_itemFromSql(str2,QString::fromUtf8("cManufactory"),QString::fromUtf8("制造单位"));
        ui->MU_RSLT_TabWidget->setItem(rowCount,11,new QTableWidgetItem(str3));

        str3=get_itemFromSql(str2,QString::fromUtf8("脉冲常数"),QString::fromUtf8(""));
        ui->MU_RSLT_TabWidget->setItem(rowCount,12,new QTableWidgetItem(str3));
        ui->MU_RSLT_TabWidget->setItem(rowCount,13,new QTableWidgetItem(str3));

        str3=get_itemFromSql(str2,QString::fromUtf8("接线模式"),QString::fromUtf8(""));
        ui->MU_RSLT_TabWidget->setItem(rowCount,16,new QTableWidgetItem(str3));

        str3=get_itemFromSql(str2,QString::fromUtf8("二次电流"),QString::fromUtf8(""));
        ui->MU_RSLT_TabWidget->setItem(rowCount,20,new QTableWidgetItem(str3));
    }
    #endif
    return 0;
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


