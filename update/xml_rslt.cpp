#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "stdio.h"
#include "QDebug"
#include "QTime"


bool MainWindow:: fill_rslt(QString ID)
{
   int rowCount,columnCount;

   if(!get_testList(ID))
   {
        return false;
   }

   rowCount =ui->MU_RSLT_TabWidget->rowCount();
   columnCount =ui->MU_RSLT_TabWidget->columnCount();

   ui->MU_RSLT_TabWidget->insertRow(rowCount);
   ui->MU_RSLT_TabWidget->setItem(rowCount,0, new QTableWidgetItem(struct_testList.Id ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,1, new QTableWidgetItem(struct_testList.MuId ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,2, new QTableWidgetItem(struct_testList.sourMac ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,3, new QTableWidgetItem(struct_testList.descMac ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,4, new QTableWidgetItem(struct_testList.appid  ));

   ui->MU_RSLT_TabWidget->setItem(rowCount,5, new QTableWidgetItem(struct_testList.ANALOGRATE_V ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,6, new QTableWidgetItem(struct_testList.ANALOGRATE_I  ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,7, new QTableWidgetItem(struct_testList.VOLTAGERANGE  ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,8, new QTableWidgetItem(struct_testList.CURRENTRANGE  ));

   ui->MU_RSLT_TabWidget->setItem(rowCount,9, new QTableWidgetItem(struct_testList.SYNTYPE  ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,10, new QTableWidgetItem(struct_testList.startTestTime  ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,11, new QTableWidgetItem(struct_testList.dataSaveTime  ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,12, new QTableWidgetItem(struct_testList.tester  ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,13, new QTableWidgetItem(struct_testList.auditor  ));

   ui->MU_RSLT_TabWidget->setItem(rowCount,14, new QTableWidgetItem(struct_testList.AuditState  ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,15, new QTableWidgetItem(struct_testList.result  ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,16, new QTableWidgetItem(struct_testList.environment  ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,17, new QTableWidgetItem(struct_testList.protocolData  ));
   ui->MU_RSLT_TabWidget->setItem(rowCount,18, new QTableWidgetItem(struct_testList.otherInformation));
   ui->MU_RSLT_TabWidget->setItem(rowCount,19, new QTableWidgetItem(struct_testList.barCode  ));

   ui->MU_RSLT_TabWidget->setItem(rowCount,20, new QTableWidgetItem(struct_testList.taskNo  ));


   if(!get_muList(struct_testList.MuId))
   {
        return false;
   }

   ui->MU_RSLT_TabWidget->setItem(rowCount,21, new QTableWidgetItem(struct_muList.bianHao));
   ui->MU_RSLT_TabWidget->setItem(rowCount,22, new QTableWidgetItem(struct_muList.xinHao));
   ui->MU_RSLT_TabWidget->setItem(rowCount,23, new QTableWidgetItem(struct_muList.changjia));

   return true;

}


