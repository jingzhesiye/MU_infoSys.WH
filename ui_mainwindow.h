/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *EM_down_Act;
    QAction *EM_options_Act;
    QAction *EM_update_Act;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *MU_down_page;
    QGridLayout *gridLayout_2;
    QFrame *EM_down_barCode_Frame;
    QGridLayout *gridLayout_25;
    QPushButton *EM_down_sampleInfo_PsBtn;
    QLineEdit *EM_down_barCode_LnEdit;
    QLabel *EM_down_barCode_Label;
    QPushButton *EM_down_clean_PsBtn;
    QSpacerItem *EM_down_HLSpacer;
    QGroupBox *MU_down_GpBox;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QPushButton *EM_down_saveLocalSql_PsBtn;
    QPushButton *EM_down_loadLocalSql_PsBtn;
    QPushButton *EM_down_deleteLocalSqlItem_PsBtn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *EM_save_XML_PsBtn;
    QPushButton *EM_options_deleteLocalSqlAll_PsBtn;
    QTabWidget *EM_down_TabWidget;
    QWidget *MU_sampleInfo_tab;
    QGridLayout *gridLayout_9;
    QTableWidget *MU_sampleInfo_TblWidget;
    QWidget *MU_METER_tab;
    QGridLayout *gridLayout_18;
    QTableWidget *MU_METER_TblWidget;
    QWidget *EM_P_CODE_tab;
    QGridLayout *gridLayout_19;
    QTableWidget *EM_P_CODE_TblWidget;
    QWidget *EM_DETECT_TASK_tab;
    QGridLayout *gridLayout;
    QTableWidget *EM_DETECT_TASK_TblWidget;
    QWidget *EM_DETECT_OUT_EQUIP_tab;
    QGridLayout *gridLayout_14;
    QTableWidget *EM_DETECT_OUT_EQUIP_TblWidget;
    QWidget *EM_update_page;
    QGridLayout *gridLayout_20;
    QGroupBox *EM_update_loadDetectTaskNo_GpBox;
    QGridLayout *gridLayout_21;
    QFrame *EM_update_loadDetectTaskNo_Frame;
    QGridLayout *gridLayout_23;
    QPushButton *EM_update_loadLocalSql_PsBtn;
    QSpacerItem *EM_update_searchBarCode_HlSpacer;
    QLineEdit *EM_update_searchBarCode_LnEdit;
    QLabel *EM_update_searchBarCode_Label;
    QPushButton *EM_update_loadDetectTaskNo_PsBtn;
    QSpacerItem *EM_update_searchBarCode_VlSpacer;
    QTableWidget *MU_update_loadDetectTaskNo_TblWidget;
    QGroupBox *EM_update_info_GpBox;
    QGridLayout *gridLayout_16;
    QFrame *EM_update_Frame;
    QGridLayout *gridLayout_7;
    QPushButton *EM_update_results_PsBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *EM_creat_xml_PsBtn;
    QTabWidget *MU_update_TabWidget;
    QWidget *MU_INTUIT_MET_tab;
    QGridLayout *gridLayout_8;
    QTableWidget *MU_INTUIT_MET_TblWidget;
    QWidget *MU_BASICERR_Tab;
    QGridLayout *gridLayout_11;
    QTableWidget *MU_BASICERR_TblWidget;
    QWidget *MU_integrity_Tab;
    QGridLayout *gridLayout_13;
    QTableWidget *MU_integrity_TblWidget;
    QWidget *MU_transmission_tab;
    QGridLayout *gridLayout_15;
    QTableWidget *MU_transmission_TblWidget;
    QWidget *MU_dispersion_tab;
    QGridLayout *gridLayout_24;
    QTableWidget *MU_dispersion_TblWidget;
    QWidget *MU_RSLT_Tab;
    QGridLayout *gridLayout_5;
    QTableWidget *MU_RSLT_TabWidget;
    QWidget *EM_options_page;
    QGridLayout *gridLayout_22;
    QFrame *EM_options_setArg_Frame;
    QGridLayout *gridLayout_6;
    QLabel *EM_options_setArg_Label;
    QSpacerItem *EM_options_HLSpacer;
    QFrame *EM_options_check_Frame;
    QGridLayout *gridLayout_10;
    QLabel *EM_options_check_Label;
    QLineEdit *EM_options_check_LnEdit;
    QPushButton *EM_options_check_PsBtn;
    QTextBrowser *EM_options_check_TxtBrowser;
    QGroupBox *EM_options_setArg_GpBox;
    QGridLayout *gridLayout_12;
    QPushButton *EM_options_setArg_Oracle_PsBtn;
    QPushButton *EM_options_setArg_localSqlPath_PsBtn;
    QLabel *EM_options_appKey_Lable;
    QLineEdit *EM_options_appKey_LnEdit;
    QLabel *EM_options_appSecret_Lable;
    QPushButton *EM_options_detectEquipNo_PsBtn;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *EM_options_detectEquipNo_LnEdit;
    QLineEdit *EM_options_appSecret_LnEdit;
    QLineEdit *EM_options_setArg_localSqlPath_LnEdit;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 500);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo_xinglong.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        EM_down_Act = new QAction(MainWindow);
        EM_down_Act->setObjectName(QString::fromUtf8("EM_down_Act"));
        EM_down_Act->setCheckable(true);
        EM_down_Act->setChecked(true);
        QFont font;
        font.setPointSize(16);
        EM_down_Act->setFont(font);
        EM_options_Act = new QAction(MainWindow);
        EM_options_Act->setObjectName(QString::fromUtf8("EM_options_Act"));
        EM_options_Act->setCheckable(true);
        EM_options_Act->setFont(font);
        EM_update_Act = new QAction(MainWindow);
        EM_update_Act->setObjectName(QString::fromUtf8("EM_update_Act"));
        EM_update_Act->setCheckable(true);
        EM_update_Act->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        MU_down_page = new QWidget();
        MU_down_page->setObjectName(QString::fromUtf8("MU_down_page"));
        gridLayout_2 = new QGridLayout(MU_down_page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(2);
        EM_down_barCode_Frame = new QFrame(MU_down_page);
        EM_down_barCode_Frame->setObjectName(QString::fromUtf8("EM_down_barCode_Frame"));
        EM_down_barCode_Frame->setStyleSheet(QString::fromUtf8("#EM_down_barCode_Frame{\n"
"	border-image: url(:baseTitle3.png);\n"
"}"));
        EM_down_barCode_Frame->setFrameShape(QFrame::StyledPanel);
        EM_down_barCode_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_25 = new QGridLayout(EM_down_barCode_Frame);
        gridLayout_25->setSpacing(6);
        gridLayout_25->setContentsMargins(6, 6, 6, 6);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        EM_down_sampleInfo_PsBtn = new QPushButton(EM_down_barCode_Frame);
        EM_down_sampleInfo_PsBtn->setObjectName(QString::fromUtf8("EM_down_sampleInfo_PsBtn"));

        gridLayout_25->addWidget(EM_down_sampleInfo_PsBtn, 1, 2, 1, 1);

        EM_down_barCode_LnEdit = new QLineEdit(EM_down_barCode_Frame);
        EM_down_barCode_LnEdit->setObjectName(QString::fromUtf8("EM_down_barCode_LnEdit"));

        gridLayout_25->addWidget(EM_down_barCode_LnEdit, 1, 1, 1, 1);

        EM_down_barCode_Label = new QLabel(EM_down_barCode_Frame);
        EM_down_barCode_Label->setObjectName(QString::fromUtf8("EM_down_barCode_Label"));
        EM_down_barCode_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_25->addWidget(EM_down_barCode_Label, 1, 0, 1, 1);

        EM_down_clean_PsBtn = new QPushButton(EM_down_barCode_Frame);
        EM_down_clean_PsBtn->setObjectName(QString::fromUtf8("EM_down_clean_PsBtn"));

        gridLayout_25->addWidget(EM_down_clean_PsBtn, 1, 6, 1, 1);

        EM_down_HLSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_25->addItem(EM_down_HLSpacer, 1, 3, 1, 1);


        gridLayout_2->addWidget(EM_down_barCode_Frame, 0, 0, 1, 2);

        MU_down_GpBox = new QGroupBox(MU_down_page);
        MU_down_GpBox->setObjectName(QString::fromUtf8("MU_down_GpBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MU_down_GpBox->sizePolicy().hasHeightForWidth());
        MU_down_GpBox->setSizePolicy(sizePolicy);
        MU_down_GpBox->setLayoutDirection(Qt::LeftToRight);
        MU_down_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #b0e0e6, stop: 1 #b0e0e6);\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top:1ex; /* leave space at the top for the title */\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top left; /* position at the top center */\n"
"     padding: 0 3px;\n"
" \n"
"   \n"
" }"));
        MU_down_GpBox->setFlat(false);
        MU_down_GpBox->setCheckable(false);
        gridLayout_4 = new QGridLayout(MU_down_GpBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(MU_down_GpBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        EM_down_saveLocalSql_PsBtn = new QPushButton(MU_down_GpBox);
        EM_down_saveLocalSql_PsBtn->setObjectName(QString::fromUtf8("EM_down_saveLocalSql_PsBtn"));

        gridLayout_4->addWidget(EM_down_saveLocalSql_PsBtn, 0, 1, 1, 1);

        EM_down_loadLocalSql_PsBtn = new QPushButton(MU_down_GpBox);
        EM_down_loadLocalSql_PsBtn->setObjectName(QString::fromUtf8("EM_down_loadLocalSql_PsBtn"));

        gridLayout_4->addWidget(EM_down_loadLocalSql_PsBtn, 0, 2, 1, 1);

        EM_down_deleteLocalSqlItem_PsBtn = new QPushButton(MU_down_GpBox);
        EM_down_deleteLocalSqlItem_PsBtn->setObjectName(QString::fromUtf8("EM_down_deleteLocalSqlItem_PsBtn"));

        gridLayout_4->addWidget(EM_down_deleteLocalSqlItem_PsBtn, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        EM_save_XML_PsBtn = new QPushButton(MU_down_GpBox);
        EM_save_XML_PsBtn->setObjectName(QString::fromUtf8("EM_save_XML_PsBtn"));

        gridLayout_4->addWidget(EM_save_XML_PsBtn, 0, 5, 1, 1);

        EM_options_deleteLocalSqlAll_PsBtn = new QPushButton(MU_down_GpBox);
        EM_options_deleteLocalSqlAll_PsBtn->setObjectName(QString::fromUtf8("EM_options_deleteLocalSqlAll_PsBtn"));

        gridLayout_4->addWidget(EM_options_deleteLocalSqlAll_PsBtn, 0, 6, 1, 1);


        gridLayout_2->addWidget(MU_down_GpBox, 1, 0, 1, 2);

        EM_down_TabWidget = new QTabWidget(MU_down_page);
        EM_down_TabWidget->setObjectName(QString::fromUtf8("EM_down_TabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(EM_down_TabWidget->sizePolicy().hasHeightForWidth());
        EM_down_TabWidget->setSizePolicy(sizePolicy1);
        MU_sampleInfo_tab = new QWidget();
        MU_sampleInfo_tab->setObjectName(QString::fromUtf8("MU_sampleInfo_tab"));
        gridLayout_9 = new QGridLayout(MU_sampleInfo_tab);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        MU_sampleInfo_TblWidget = new QTableWidget(MU_sampleInfo_tab);
        if (MU_sampleInfo_TblWidget->columnCount() < 20)
            MU_sampleInfo_TblWidget->setColumnCount(20);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(17, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(18, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        MU_sampleInfo_TblWidget->setHorizontalHeaderItem(19, __qtablewidgetitem19);
        MU_sampleInfo_TblWidget->setObjectName(QString::fromUtf8("MU_sampleInfo_TblWidget"));

        gridLayout_9->addWidget(MU_sampleInfo_TblWidget, 0, 0, 1, 1);

        EM_down_TabWidget->addTab(MU_sampleInfo_tab, QString());
        MU_METER_tab = new QWidget();
        MU_METER_tab->setObjectName(QString::fromUtf8("MU_METER_tab"));
        gridLayout_18 = new QGridLayout(MU_METER_tab);
        gridLayout_18->setSpacing(0);
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        MU_METER_TblWidget = new QTableWidget(MU_METER_tab);
        if (MU_METER_TblWidget->columnCount() < 98)
            MU_METER_TblWidget->setColumnCount(98);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(6, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(7, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(8, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(9, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(10, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(11, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(12, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(13, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(14, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(15, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(16, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(17, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(18, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(19, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(20, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(21, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(22, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(23, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(24, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(25, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(26, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(27, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(28, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(29, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(30, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(31, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(32, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(33, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(34, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(35, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(36, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(37, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(38, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(39, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(40, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(41, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(42, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(43, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(44, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(45, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(46, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(47, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(48, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(49, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(50, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(51, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(52, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(53, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(54, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(55, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(56, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(57, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(58, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(59, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(60, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(61, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(62, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(63, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(64, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(65, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(66, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(67, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(68, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(69, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(70, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(71, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(72, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(73, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(74, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(75, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(76, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(77, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(78, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(79, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(80, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(81, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(82, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(83, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(84, __qtablewidgetitem104);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(85, __qtablewidgetitem105);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(86, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(87, __qtablewidgetitem107);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(88, __qtablewidgetitem108);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(89, __qtablewidgetitem109);
        QTableWidgetItem *__qtablewidgetitem110 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(90, __qtablewidgetitem110);
        QTableWidgetItem *__qtablewidgetitem111 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(91, __qtablewidgetitem111);
        QTableWidgetItem *__qtablewidgetitem112 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(92, __qtablewidgetitem112);
        QTableWidgetItem *__qtablewidgetitem113 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(93, __qtablewidgetitem113);
        QTableWidgetItem *__qtablewidgetitem114 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(94, __qtablewidgetitem114);
        QTableWidgetItem *__qtablewidgetitem115 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(95, __qtablewidgetitem115);
        QTableWidgetItem *__qtablewidgetitem116 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(96, __qtablewidgetitem116);
        QTableWidgetItem *__qtablewidgetitem117 = new QTableWidgetItem();
        MU_METER_TblWidget->setHorizontalHeaderItem(97, __qtablewidgetitem117);
        if (MU_METER_TblWidget->rowCount() < 1)
            MU_METER_TblWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem118 = new QTableWidgetItem();
        MU_METER_TblWidget->setVerticalHeaderItem(0, __qtablewidgetitem118);
        QTableWidgetItem *__qtablewidgetitem119 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 0, __qtablewidgetitem119);
        QTableWidgetItem *__qtablewidgetitem120 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 1, __qtablewidgetitem120);
        QTableWidgetItem *__qtablewidgetitem121 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 2, __qtablewidgetitem121);
        QTableWidgetItem *__qtablewidgetitem122 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 3, __qtablewidgetitem122);
        QTableWidgetItem *__qtablewidgetitem123 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 4, __qtablewidgetitem123);
        QTableWidgetItem *__qtablewidgetitem124 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 5, __qtablewidgetitem124);
        QTableWidgetItem *__qtablewidgetitem125 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 6, __qtablewidgetitem125);
        QTableWidgetItem *__qtablewidgetitem126 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 8, __qtablewidgetitem126);
        QTableWidgetItem *__qtablewidgetitem127 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 9, __qtablewidgetitem127);
        QTableWidgetItem *__qtablewidgetitem128 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 12, __qtablewidgetitem128);
        QTableWidgetItem *__qtablewidgetitem129 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 13, __qtablewidgetitem129);
        QTableWidgetItem *__qtablewidgetitem130 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 14, __qtablewidgetitem130);
        QTableWidgetItem *__qtablewidgetitem131 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 22, __qtablewidgetitem131);
        QTableWidgetItem *__qtablewidgetitem132 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 23, __qtablewidgetitem132);
        QTableWidgetItem *__qtablewidgetitem133 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 24, __qtablewidgetitem133);
        QTableWidgetItem *__qtablewidgetitem134 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 25, __qtablewidgetitem134);
        QTableWidgetItem *__qtablewidgetitem135 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 26, __qtablewidgetitem135);
        QTableWidgetItem *__qtablewidgetitem136 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 27, __qtablewidgetitem136);
        QTableWidgetItem *__qtablewidgetitem137 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 29, __qtablewidgetitem137);
        QTableWidgetItem *__qtablewidgetitem138 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 31, __qtablewidgetitem138);
        QTableWidgetItem *__qtablewidgetitem139 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 32, __qtablewidgetitem139);
        QTableWidgetItem *__qtablewidgetitem140 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 33, __qtablewidgetitem140);
        QTableWidgetItem *__qtablewidgetitem141 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 35, __qtablewidgetitem141);
        QTableWidgetItem *__qtablewidgetitem142 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 36, __qtablewidgetitem142);
        QTableWidgetItem *__qtablewidgetitem143 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 37, __qtablewidgetitem143);
        QTableWidgetItem *__qtablewidgetitem144 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 38, __qtablewidgetitem144);
        QTableWidgetItem *__qtablewidgetitem145 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 40, __qtablewidgetitem145);
        QTableWidgetItem *__qtablewidgetitem146 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 41, __qtablewidgetitem146);
        QTableWidgetItem *__qtablewidgetitem147 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 42, __qtablewidgetitem147);
        QTableWidgetItem *__qtablewidgetitem148 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 43, __qtablewidgetitem148);
        QTableWidgetItem *__qtablewidgetitem149 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 49, __qtablewidgetitem149);
        QTableWidgetItem *__qtablewidgetitem150 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 50, __qtablewidgetitem150);
        QTableWidgetItem *__qtablewidgetitem151 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 52, __qtablewidgetitem151);
        QTableWidgetItem *__qtablewidgetitem152 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 64, __qtablewidgetitem152);
        QTableWidgetItem *__qtablewidgetitem153 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 68, __qtablewidgetitem153);
        QTableWidgetItem *__qtablewidgetitem154 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 71, __qtablewidgetitem154);
        QTableWidgetItem *__qtablewidgetitem155 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 74, __qtablewidgetitem155);
        QTableWidgetItem *__qtablewidgetitem156 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 76, __qtablewidgetitem156);
        QTableWidgetItem *__qtablewidgetitem157 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 77, __qtablewidgetitem157);
        QTableWidgetItem *__qtablewidgetitem158 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 78, __qtablewidgetitem158);
        QTableWidgetItem *__qtablewidgetitem159 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 86, __qtablewidgetitem159);
        QTableWidgetItem *__qtablewidgetitem160 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 87, __qtablewidgetitem160);
        QTableWidgetItem *__qtablewidgetitem161 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 91, __qtablewidgetitem161);
        QTableWidgetItem *__qtablewidgetitem162 = new QTableWidgetItem();
        MU_METER_TblWidget->setItem(0, 92, __qtablewidgetitem162);
        MU_METER_TblWidget->setObjectName(QString::fromUtf8("MU_METER_TblWidget"));

        gridLayout_18->addWidget(MU_METER_TblWidget, 0, 0, 1, 1);

        EM_down_TabWidget->addTab(MU_METER_tab, QString());
        EM_P_CODE_tab = new QWidget();
        EM_P_CODE_tab->setObjectName(QString::fromUtf8("EM_P_CODE_tab"));
        gridLayout_19 = new QGridLayout(EM_P_CODE_tab);
        gridLayout_19->setSpacing(0);
        gridLayout_19->setContentsMargins(0, 0, 0, 0);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        EM_P_CODE_TblWidget = new QTableWidget(EM_P_CODE_tab);
        if (EM_P_CODE_TblWidget->columnCount() < 21)
            EM_P_CODE_TblWidget->setColumnCount(21);
        QTableWidgetItem *__qtablewidgetitem163 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem163);
        QTableWidgetItem *__qtablewidgetitem164 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem164);
        QTableWidgetItem *__qtablewidgetitem165 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem165);
        QTableWidgetItem *__qtablewidgetitem166 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(3, __qtablewidgetitem166);
        QTableWidgetItem *__qtablewidgetitem167 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(4, __qtablewidgetitem167);
        QTableWidgetItem *__qtablewidgetitem168 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(5, __qtablewidgetitem168);
        QTableWidgetItem *__qtablewidgetitem169 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(6, __qtablewidgetitem169);
        QTableWidgetItem *__qtablewidgetitem170 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(7, __qtablewidgetitem170);
        QTableWidgetItem *__qtablewidgetitem171 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(8, __qtablewidgetitem171);
        QTableWidgetItem *__qtablewidgetitem172 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(9, __qtablewidgetitem172);
        QTableWidgetItem *__qtablewidgetitem173 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(10, __qtablewidgetitem173);
        QTableWidgetItem *__qtablewidgetitem174 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(11, __qtablewidgetitem174);
        QTableWidgetItem *__qtablewidgetitem175 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(12, __qtablewidgetitem175);
        QTableWidgetItem *__qtablewidgetitem176 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(13, __qtablewidgetitem176);
        QTableWidgetItem *__qtablewidgetitem177 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(14, __qtablewidgetitem177);
        QTableWidgetItem *__qtablewidgetitem178 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(15, __qtablewidgetitem178);
        QTableWidgetItem *__qtablewidgetitem179 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(16, __qtablewidgetitem179);
        QTableWidgetItem *__qtablewidgetitem180 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(17, __qtablewidgetitem180);
        QTableWidgetItem *__qtablewidgetitem181 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(18, __qtablewidgetitem181);
        QTableWidgetItem *__qtablewidgetitem182 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(19, __qtablewidgetitem182);
        QTableWidgetItem *__qtablewidgetitem183 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setHorizontalHeaderItem(20, __qtablewidgetitem183);
        if (EM_P_CODE_TblWidget->rowCount() < 2)
            EM_P_CODE_TblWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem184 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setVerticalHeaderItem(0, __qtablewidgetitem184);
        QTableWidgetItem *__qtablewidgetitem185 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setVerticalHeaderItem(1, __qtablewidgetitem185);
        QTableWidgetItem *__qtablewidgetitem186 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(0, 0, __qtablewidgetitem186);
        QTableWidgetItem *__qtablewidgetitem187 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(0, 1, __qtablewidgetitem187);
        QTableWidgetItem *__qtablewidgetitem188 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(0, 2, __qtablewidgetitem188);
        QTableWidgetItem *__qtablewidgetitem189 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(0, 3, __qtablewidgetitem189);
        QTableWidgetItem *__qtablewidgetitem190 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(0, 4, __qtablewidgetitem190);
        QTableWidgetItem *__qtablewidgetitem191 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(0, 5, __qtablewidgetitem191);
        QTableWidgetItem *__qtablewidgetitem192 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(0, 6, __qtablewidgetitem192);
        QTableWidgetItem *__qtablewidgetitem193 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(0, 13, __qtablewidgetitem193);
        QTableWidgetItem *__qtablewidgetitem194 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(0, 14, __qtablewidgetitem194);
        QTableWidgetItem *__qtablewidgetitem195 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(1, 0, __qtablewidgetitem195);
        QTableWidgetItem *__qtablewidgetitem196 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(1, 1, __qtablewidgetitem196);
        QTableWidgetItem *__qtablewidgetitem197 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(1, 2, __qtablewidgetitem197);
        QTableWidgetItem *__qtablewidgetitem198 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(1, 6, __qtablewidgetitem198);
        QTableWidgetItem *__qtablewidgetitem199 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(1, 13, __qtablewidgetitem199);
        QTableWidgetItem *__qtablewidgetitem200 = new QTableWidgetItem();
        EM_P_CODE_TblWidget->setItem(1, 14, __qtablewidgetitem200);
        EM_P_CODE_TblWidget->setObjectName(QString::fromUtf8("EM_P_CODE_TblWidget"));

        gridLayout_19->addWidget(EM_P_CODE_TblWidget, 0, 0, 1, 1);

        EM_down_TabWidget->addTab(EM_P_CODE_tab, QString());
        EM_DETECT_TASK_tab = new QWidget();
        EM_DETECT_TASK_tab->setObjectName(QString::fromUtf8("EM_DETECT_TASK_tab"));
        gridLayout = new QGridLayout(EM_DETECT_TASK_tab);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        EM_DETECT_TASK_TblWidget = new QTableWidget(EM_DETECT_TASK_tab);
        if (EM_DETECT_TASK_TblWidget->columnCount() < 26)
            EM_DETECT_TASK_TblWidget->setColumnCount(26);
        QTableWidgetItem *__qtablewidgetitem201 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem201);
        QTableWidgetItem *__qtablewidgetitem202 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem202);
        QTableWidgetItem *__qtablewidgetitem203 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem203);
        QTableWidgetItem *__qtablewidgetitem204 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(3, __qtablewidgetitem204);
        QTableWidgetItem *__qtablewidgetitem205 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(4, __qtablewidgetitem205);
        QTableWidgetItem *__qtablewidgetitem206 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(5, __qtablewidgetitem206);
        QTableWidgetItem *__qtablewidgetitem207 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(6, __qtablewidgetitem207);
        QTableWidgetItem *__qtablewidgetitem208 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(7, __qtablewidgetitem208);
        QTableWidgetItem *__qtablewidgetitem209 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(8, __qtablewidgetitem209);
        QTableWidgetItem *__qtablewidgetitem210 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(9, __qtablewidgetitem210);
        QTableWidgetItem *__qtablewidgetitem211 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(10, __qtablewidgetitem211);
        QTableWidgetItem *__qtablewidgetitem212 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(11, __qtablewidgetitem212);
        QTableWidgetItem *__qtablewidgetitem213 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(12, __qtablewidgetitem213);
        QTableWidgetItem *__qtablewidgetitem214 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(13, __qtablewidgetitem214);
        QTableWidgetItem *__qtablewidgetitem215 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(14, __qtablewidgetitem215);
        QTableWidgetItem *__qtablewidgetitem216 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(15, __qtablewidgetitem216);
        QTableWidgetItem *__qtablewidgetitem217 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(16, __qtablewidgetitem217);
        QTableWidgetItem *__qtablewidgetitem218 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(17, __qtablewidgetitem218);
        QTableWidgetItem *__qtablewidgetitem219 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(18, __qtablewidgetitem219);
        QTableWidgetItem *__qtablewidgetitem220 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(19, __qtablewidgetitem220);
        QTableWidgetItem *__qtablewidgetitem221 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(20, __qtablewidgetitem221);
        QTableWidgetItem *__qtablewidgetitem222 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(21, __qtablewidgetitem222);
        QTableWidgetItem *__qtablewidgetitem223 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(22, __qtablewidgetitem223);
        QTableWidgetItem *__qtablewidgetitem224 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(23, __qtablewidgetitem224);
        QTableWidgetItem *__qtablewidgetitem225 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(24, __qtablewidgetitem225);
        QTableWidgetItem *__qtablewidgetitem226 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setHorizontalHeaderItem(25, __qtablewidgetitem226);
        if (EM_DETECT_TASK_TblWidget->rowCount() < 1)
            EM_DETECT_TASK_TblWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem227 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setVerticalHeaderItem(0, __qtablewidgetitem227);
        QTableWidgetItem *__qtablewidgetitem228 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 0, __qtablewidgetitem228);
        QTableWidgetItem *__qtablewidgetitem229 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 1, __qtablewidgetitem229);
        QTableWidgetItem *__qtablewidgetitem230 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 2, __qtablewidgetitem230);
        QTableWidgetItem *__qtablewidgetitem231 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 3, __qtablewidgetitem231);
        QTableWidgetItem *__qtablewidgetitem232 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 4, __qtablewidgetitem232);
        QTableWidgetItem *__qtablewidgetitem233 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 5, __qtablewidgetitem233);
        QTableWidgetItem *__qtablewidgetitem234 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 6, __qtablewidgetitem234);
        QTableWidgetItem *__qtablewidgetitem235 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 7, __qtablewidgetitem235);
        QTableWidgetItem *__qtablewidgetitem236 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 8, __qtablewidgetitem236);
        QTableWidgetItem *__qtablewidgetitem237 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 12, __qtablewidgetitem237);
        QTableWidgetItem *__qtablewidgetitem238 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 14, __qtablewidgetitem238);
        QTableWidgetItem *__qtablewidgetitem239 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 15, __qtablewidgetitem239);
        QTableWidgetItem *__qtablewidgetitem240 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 16, __qtablewidgetitem240);
        QTableWidgetItem *__qtablewidgetitem241 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 17, __qtablewidgetitem241);
        QTableWidgetItem *__qtablewidgetitem242 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 19, __qtablewidgetitem242);
        QTableWidgetItem *__qtablewidgetitem243 = new QTableWidgetItem();
        EM_DETECT_TASK_TblWidget->setItem(0, 23, __qtablewidgetitem243);
        EM_DETECT_TASK_TblWidget->setObjectName(QString::fromUtf8("EM_DETECT_TASK_TblWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(EM_DETECT_TASK_TblWidget->sizePolicy().hasHeightForWidth());
        EM_DETECT_TASK_TblWidget->setSizePolicy(sizePolicy2);
        EM_DETECT_TASK_TblWidget->setSelectionMode(QAbstractItemView::NoSelection);
        EM_DETECT_TASK_TblWidget->horizontalHeader()->setDefaultSectionSize(100);
        EM_DETECT_TASK_TblWidget->horizontalHeader()->setMinimumSectionSize(22);
        EM_DETECT_TASK_TblWidget->verticalHeader()->setDefaultSectionSize(28);

        gridLayout->addWidget(EM_DETECT_TASK_TblWidget, 0, 0, 1, 1);

        EM_down_TabWidget->addTab(EM_DETECT_TASK_tab, QString());
        EM_DETECT_OUT_EQUIP_tab = new QWidget();
        EM_DETECT_OUT_EQUIP_tab->setObjectName(QString::fromUtf8("EM_DETECT_OUT_EQUIP_tab"));
        gridLayout_14 = new QGridLayout(EM_DETECT_OUT_EQUIP_tab);
        gridLayout_14->setSpacing(0);
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        EM_DETECT_OUT_EQUIP_TblWidget = new QTableWidget(EM_DETECT_OUT_EQUIP_tab);
        if (EM_DETECT_OUT_EQUIP_TblWidget->columnCount() < 15)
            EM_DETECT_OUT_EQUIP_TblWidget->setColumnCount(15);
        QTableWidgetItem *__qtablewidgetitem244 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem244);
        QTableWidgetItem *__qtablewidgetitem245 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem245);
        QTableWidgetItem *__qtablewidgetitem246 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem246);
        QTableWidgetItem *__qtablewidgetitem247 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(3, __qtablewidgetitem247);
        QTableWidgetItem *__qtablewidgetitem248 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(4, __qtablewidgetitem248);
        QTableWidgetItem *__qtablewidgetitem249 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(5, __qtablewidgetitem249);
        QTableWidgetItem *__qtablewidgetitem250 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(6, __qtablewidgetitem250);
        QTableWidgetItem *__qtablewidgetitem251 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(7, __qtablewidgetitem251);
        QTableWidgetItem *__qtablewidgetitem252 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(8, __qtablewidgetitem252);
        QTableWidgetItem *__qtablewidgetitem253 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(9, __qtablewidgetitem253);
        QTableWidgetItem *__qtablewidgetitem254 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(10, __qtablewidgetitem254);
        QTableWidgetItem *__qtablewidgetitem255 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(11, __qtablewidgetitem255);
        QTableWidgetItem *__qtablewidgetitem256 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(12, __qtablewidgetitem256);
        QTableWidgetItem *__qtablewidgetitem257 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(13, __qtablewidgetitem257);
        QTableWidgetItem *__qtablewidgetitem258 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setHorizontalHeaderItem(14, __qtablewidgetitem258);
        if (EM_DETECT_OUT_EQUIP_TblWidget->rowCount() < 1)
            EM_DETECT_OUT_EQUIP_TblWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem259 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setVerticalHeaderItem(0, __qtablewidgetitem259);
        QTableWidgetItem *__qtablewidgetitem260 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 0, __qtablewidgetitem260);
        QTableWidgetItem *__qtablewidgetitem261 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 1, __qtablewidgetitem261);
        QTableWidgetItem *__qtablewidgetitem262 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 2, __qtablewidgetitem262);
        QTableWidgetItem *__qtablewidgetitem263 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 3, __qtablewidgetitem263);
        QTableWidgetItem *__qtablewidgetitem264 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 4, __qtablewidgetitem264);
        QTableWidgetItem *__qtablewidgetitem265 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 7, __qtablewidgetitem265);
        QTableWidgetItem *__qtablewidgetitem266 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 8, __qtablewidgetitem266);
        QTableWidgetItem *__qtablewidgetitem267 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 9, __qtablewidgetitem267);
        QTableWidgetItem *__qtablewidgetitem268 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 10, __qtablewidgetitem268);
        QTableWidgetItem *__qtablewidgetitem269 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 11, __qtablewidgetitem269);
        QTableWidgetItem *__qtablewidgetitem270 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 12, __qtablewidgetitem270);
        QTableWidgetItem *__qtablewidgetitem271 = new QTableWidgetItem();
        EM_DETECT_OUT_EQUIP_TblWidget->setItem(0, 13, __qtablewidgetitem271);
        EM_DETECT_OUT_EQUIP_TblWidget->setObjectName(QString::fromUtf8("EM_DETECT_OUT_EQUIP_TblWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(EM_DETECT_OUT_EQUIP_TblWidget->sizePolicy().hasHeightForWidth());
        EM_DETECT_OUT_EQUIP_TblWidget->setSizePolicy(sizePolicy3);
        EM_DETECT_OUT_EQUIP_TblWidget->setSelectionMode(QAbstractItemView::NoSelection);
        EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeader()->setDefaultSectionSize(100);
        EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeader()->setMinimumSectionSize(22);
        EM_DETECT_OUT_EQUIP_TblWidget->verticalHeader()->setDefaultSectionSize(28);

        gridLayout_14->addWidget(EM_DETECT_OUT_EQUIP_TblWidget, 0, 0, 1, 1);

        EM_down_TabWidget->addTab(EM_DETECT_OUT_EQUIP_tab, QString());

        gridLayout_2->addWidget(EM_down_TabWidget, 2, 0, 1, 2);

        stackedWidget->addWidget(MU_down_page);
        EM_update_page = new QWidget();
        EM_update_page->setObjectName(QString::fromUtf8("EM_update_page"));
        sizePolicy.setHeightForWidth(EM_update_page->sizePolicy().hasHeightForWidth());
        EM_update_page->setSizePolicy(sizePolicy);
        gridLayout_20 = new QGridLayout(EM_update_page);
        gridLayout_20->setSpacing(0);
        gridLayout_20->setContentsMargins(0, 0, 0, 0);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        EM_update_loadDetectTaskNo_GpBox = new QGroupBox(EM_update_page);
        EM_update_loadDetectTaskNo_GpBox->setObjectName(QString::fromUtf8("EM_update_loadDetectTaskNo_GpBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(EM_update_loadDetectTaskNo_GpBox->sizePolicy().hasHeightForWidth());
        EM_update_loadDetectTaskNo_GpBox->setSizePolicy(sizePolicy4);
        EM_update_loadDetectTaskNo_GpBox->setMinimumSize(QSize(245, 302));
        EM_update_loadDetectTaskNo_GpBox->setMaximumSize(QSize(245, 16777215));
        EM_update_loadDetectTaskNo_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #b0e0e6, stop: 1 #b0e0e6);\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top:0ex; /* leave space at the top for the title */\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top left; /* position at the top center */\n"
"     padding: 0 3px;\n"
"   \n"
" }"));
        gridLayout_21 = new QGridLayout(EM_update_loadDetectTaskNo_GpBox);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_21->setHorizontalSpacing(0);
        gridLayout_21->setVerticalSpacing(6);
        gridLayout_21->setContentsMargins(0, 8, 0, 0);
        EM_update_loadDetectTaskNo_Frame = new QFrame(EM_update_loadDetectTaskNo_GpBox);
        EM_update_loadDetectTaskNo_Frame->setObjectName(QString::fromUtf8("EM_update_loadDetectTaskNo_Frame"));
        EM_update_loadDetectTaskNo_Frame->setStyleSheet(QString::fromUtf8("#EM_update_load_DetectTaskNo_Frame{\n"
"	border-image: url(:baseTitle3.png);\n"
"}"));
        EM_update_loadDetectTaskNo_Frame->setFrameShape(QFrame::StyledPanel);
        EM_update_loadDetectTaskNo_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_23 = new QGridLayout(EM_update_loadDetectTaskNo_Frame);
        gridLayout_23->setSpacing(0);
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        EM_update_loadLocalSql_PsBtn = new QPushButton(EM_update_loadDetectTaskNo_Frame);
        EM_update_loadLocalSql_PsBtn->setObjectName(QString::fromUtf8("EM_update_loadLocalSql_PsBtn"));
        sizePolicy3.setHeightForWidth(EM_update_loadLocalSql_PsBtn->sizePolicy().hasHeightForWidth());
        EM_update_loadLocalSql_PsBtn->setSizePolicy(sizePolicy3);

        gridLayout_23->addWidget(EM_update_loadLocalSql_PsBtn, 2, 2, 1, 1);

        EM_update_searchBarCode_HlSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(EM_update_searchBarCode_HlSpacer, 2, 1, 1, 1);

        EM_update_searchBarCode_LnEdit = new QLineEdit(EM_update_loadDetectTaskNo_Frame);
        EM_update_searchBarCode_LnEdit->setObjectName(QString::fromUtf8("EM_update_searchBarCode_LnEdit"));

        gridLayout_23->addWidget(EM_update_searchBarCode_LnEdit, 0, 1, 1, 2);

        EM_update_searchBarCode_Label = new QLabel(EM_update_loadDetectTaskNo_Frame);
        EM_update_searchBarCode_Label->setObjectName(QString::fromUtf8("EM_update_searchBarCode_Label"));

        gridLayout_23->addWidget(EM_update_searchBarCode_Label, 0, 0, 1, 1);

        EM_update_loadDetectTaskNo_PsBtn = new QPushButton(EM_update_loadDetectTaskNo_Frame);
        EM_update_loadDetectTaskNo_PsBtn->setObjectName(QString::fromUtf8("EM_update_loadDetectTaskNo_PsBtn"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(EM_update_loadDetectTaskNo_PsBtn->sizePolicy().hasHeightForWidth());
        EM_update_loadDetectTaskNo_PsBtn->setSizePolicy(sizePolicy5);
        EM_update_loadDetectTaskNo_PsBtn->setStyleSheet(QString::fromUtf8(""));

        gridLayout_23->addWidget(EM_update_loadDetectTaskNo_PsBtn, 2, 0, 1, 1);

        EM_update_searchBarCode_VlSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_23->addItem(EM_update_searchBarCode_VlSpacer, 1, 0, 1, 1);


        gridLayout_21->addWidget(EM_update_loadDetectTaskNo_Frame, 0, 0, 1, 1);

        MU_update_loadDetectTaskNo_TblWidget = new QTableWidget(EM_update_loadDetectTaskNo_GpBox);
        if (MU_update_loadDetectTaskNo_TblWidget->columnCount() < 2)
            MU_update_loadDetectTaskNo_TblWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem272 = new QTableWidgetItem();
        MU_update_loadDetectTaskNo_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem272);
        QTableWidgetItem *__qtablewidgetitem273 = new QTableWidgetItem();
        MU_update_loadDetectTaskNo_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem273);
        MU_update_loadDetectTaskNo_TblWidget->setObjectName(QString::fromUtf8("MU_update_loadDetectTaskNo_TblWidget"));
        sizePolicy2.setHeightForWidth(MU_update_loadDetectTaskNo_TblWidget->sizePolicy().hasHeightForWidth());
        MU_update_loadDetectTaskNo_TblWidget->setSizePolicy(sizePolicy2);
        MU_update_loadDetectTaskNo_TblWidget->setMinimumSize(QSize(240, 1));
        MU_update_loadDetectTaskNo_TblWidget->setMaximumSize(QSize(240, 16777215));
        MU_update_loadDetectTaskNo_TblWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        MU_update_loadDetectTaskNo_TblWidget->horizontalHeader()->setDefaultSectionSize(201);
        MU_update_loadDetectTaskNo_TblWidget->horizontalHeader()->setMinimumSectionSize(14);
        MU_update_loadDetectTaskNo_TblWidget->verticalHeader()->setDefaultSectionSize(30);

        gridLayout_21->addWidget(MU_update_loadDetectTaskNo_TblWidget, 1, 0, 1, 1);


        gridLayout_20->addWidget(EM_update_loadDetectTaskNo_GpBox, 0, 0, 1, 1);

        EM_update_info_GpBox = new QGroupBox(EM_update_page);
        EM_update_info_GpBox->setObjectName(QString::fromUtf8("EM_update_info_GpBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(EM_update_info_GpBox->sizePolicy().hasHeightForWidth());
        EM_update_info_GpBox->setSizePolicy(sizePolicy6);
        EM_update_info_GpBox->setMaximumSize(QSize(16777215, 16777215));
        EM_update_info_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #b0e0e6, stop: 1 #b0e0e6);\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top:0ex; /* leave space at the top for the title */\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top left; /* position at the top center */\n"
"     padding: 0 3px;\n"
"   \n"
" }"));
        gridLayout_16 = new QGridLayout(EM_update_info_GpBox);
        gridLayout_16->setSpacing(0);
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        EM_update_Frame = new QFrame(EM_update_info_GpBox);
        EM_update_Frame->setObjectName(QString::fromUtf8("EM_update_Frame"));
        sizePolicy.setHeightForWidth(EM_update_Frame->sizePolicy().hasHeightForWidth());
        EM_update_Frame->setSizePolicy(sizePolicy);
        EM_update_Frame->setStyleSheet(QString::fromUtf8("#EM_update_Frame{\n"
"	border-image: url(:baseTitle3.png);\n"
"}"));
        EM_update_Frame->setFrameShape(QFrame::StyledPanel);
        EM_update_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(EM_update_Frame);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        EM_update_results_PsBtn = new QPushButton(EM_update_Frame);
        EM_update_results_PsBtn->setObjectName(QString::fromUtf8("EM_update_results_PsBtn"));

        gridLayout_7->addWidget(EM_update_results_PsBtn, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        EM_creat_xml_PsBtn = new QPushButton(EM_update_Frame);
        EM_creat_xml_PsBtn->setObjectName(QString::fromUtf8("EM_creat_xml_PsBtn"));

        gridLayout_7->addWidget(EM_creat_xml_PsBtn, 0, 0, 1, 1);


        gridLayout_16->addWidget(EM_update_Frame, 0, 0, 1, 1);

        MU_update_TabWidget = new QTabWidget(EM_update_info_GpBox);
        MU_update_TabWidget->setObjectName(QString::fromUtf8("MU_update_TabWidget"));
        MU_update_TabWidget->setEnabled(true);
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(MU_update_TabWidget->sizePolicy().hasHeightForWidth());
        MU_update_TabWidget->setSizePolicy(sizePolicy7);
        MU_INTUIT_MET_tab = new QWidget();
        MU_INTUIT_MET_tab->setObjectName(QString::fromUtf8("MU_INTUIT_MET_tab"));
        gridLayout_8 = new QGridLayout(MU_INTUIT_MET_tab);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        MU_INTUIT_MET_TblWidget = new QTableWidget(MU_INTUIT_MET_tab);
        if (MU_INTUIT_MET_TblWidget->columnCount() < 3)
            MU_INTUIT_MET_TblWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem274 = new QTableWidgetItem();
        MU_INTUIT_MET_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem274);
        QTableWidgetItem *__qtablewidgetitem275 = new QTableWidgetItem();
        MU_INTUIT_MET_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem275);
        QTableWidgetItem *__qtablewidgetitem276 = new QTableWidgetItem();
        MU_INTUIT_MET_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem276);
        MU_INTUIT_MET_TblWidget->setObjectName(QString::fromUtf8("MU_INTUIT_MET_TblWidget"));

        gridLayout_8->addWidget(MU_INTUIT_MET_TblWidget, 0, 0, 1, 1);

        MU_update_TabWidget->addTab(MU_INTUIT_MET_tab, QString());
        MU_BASICERR_Tab = new QWidget();
        MU_BASICERR_Tab->setObjectName(QString::fromUtf8("MU_BASICERR_Tab"));
        gridLayout_11 = new QGridLayout(MU_BASICERR_Tab);
        gridLayout_11->setSpacing(0);
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        MU_BASICERR_TblWidget = new QTableWidget(MU_BASICERR_Tab);
        if (MU_BASICERR_TblWidget->columnCount() < 14)
            MU_BASICERR_TblWidget->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem277 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem277);
        QTableWidgetItem *__qtablewidgetitem278 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem278);
        QTableWidgetItem *__qtablewidgetitem279 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem279);
        QTableWidgetItem *__qtablewidgetitem280 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(3, __qtablewidgetitem280);
        QTableWidgetItem *__qtablewidgetitem281 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(4, __qtablewidgetitem281);
        QTableWidgetItem *__qtablewidgetitem282 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(5, __qtablewidgetitem282);
        QTableWidgetItem *__qtablewidgetitem283 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(6, __qtablewidgetitem283);
        QTableWidgetItem *__qtablewidgetitem284 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(7, __qtablewidgetitem284);
        QTableWidgetItem *__qtablewidgetitem285 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(8, __qtablewidgetitem285);
        QTableWidgetItem *__qtablewidgetitem286 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(9, __qtablewidgetitem286);
        QTableWidgetItem *__qtablewidgetitem287 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(10, __qtablewidgetitem287);
        QTableWidgetItem *__qtablewidgetitem288 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(11, __qtablewidgetitem288);
        QTableWidgetItem *__qtablewidgetitem289 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(12, __qtablewidgetitem289);
        QTableWidgetItem *__qtablewidgetitem290 = new QTableWidgetItem();
        MU_BASICERR_TblWidget->setHorizontalHeaderItem(13, __qtablewidgetitem290);
        MU_BASICERR_TblWidget->setObjectName(QString::fromUtf8("MU_BASICERR_TblWidget"));

        gridLayout_11->addWidget(MU_BASICERR_TblWidget, 0, 0, 1, 1);

        MU_update_TabWidget->addTab(MU_BASICERR_Tab, QString());
        MU_integrity_Tab = new QWidget();
        MU_integrity_Tab->setObjectName(QString::fromUtf8("MU_integrity_Tab"));
        gridLayout_13 = new QGridLayout(MU_integrity_Tab);
        gridLayout_13->setSpacing(0);
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        MU_integrity_TblWidget = new QTableWidget(MU_integrity_Tab);
        if (MU_integrity_TblWidget->columnCount() < 8)
            MU_integrity_TblWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem291 = new QTableWidgetItem();
        MU_integrity_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem291);
        QTableWidgetItem *__qtablewidgetitem292 = new QTableWidgetItem();
        MU_integrity_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem292);
        QTableWidgetItem *__qtablewidgetitem293 = new QTableWidgetItem();
        MU_integrity_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem293);
        QTableWidgetItem *__qtablewidgetitem294 = new QTableWidgetItem();
        MU_integrity_TblWidget->setHorizontalHeaderItem(3, __qtablewidgetitem294);
        QTableWidgetItem *__qtablewidgetitem295 = new QTableWidgetItem();
        MU_integrity_TblWidget->setHorizontalHeaderItem(4, __qtablewidgetitem295);
        QTableWidgetItem *__qtablewidgetitem296 = new QTableWidgetItem();
        MU_integrity_TblWidget->setHorizontalHeaderItem(5, __qtablewidgetitem296);
        QTableWidgetItem *__qtablewidgetitem297 = new QTableWidgetItem();
        MU_integrity_TblWidget->setHorizontalHeaderItem(6, __qtablewidgetitem297);
        QTableWidgetItem *__qtablewidgetitem298 = new QTableWidgetItem();
        MU_integrity_TblWidget->setHorizontalHeaderItem(7, __qtablewidgetitem298);
        MU_integrity_TblWidget->setObjectName(QString::fromUtf8("MU_integrity_TblWidget"));
        sizePolicy2.setHeightForWidth(MU_integrity_TblWidget->sizePolicy().hasHeightForWidth());
        MU_integrity_TblWidget->setSizePolicy(sizePolicy2);

        gridLayout_13->addWidget(MU_integrity_TblWidget, 0, 0, 1, 1);

        MU_update_TabWidget->addTab(MU_integrity_Tab, QString());
        MU_transmission_tab = new QWidget();
        MU_transmission_tab->setObjectName(QString::fromUtf8("MU_transmission_tab"));
        gridLayout_15 = new QGridLayout(MU_transmission_tab);
        gridLayout_15->setSpacing(0);
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        MU_transmission_TblWidget = new QTableWidget(MU_transmission_tab);
        if (MU_transmission_TblWidget->columnCount() < 7)
            MU_transmission_TblWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem299 = new QTableWidgetItem();
        MU_transmission_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem299);
        QTableWidgetItem *__qtablewidgetitem300 = new QTableWidgetItem();
        MU_transmission_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem300);
        QTableWidgetItem *__qtablewidgetitem301 = new QTableWidgetItem();
        MU_transmission_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem301);
        QTableWidgetItem *__qtablewidgetitem302 = new QTableWidgetItem();
        MU_transmission_TblWidget->setHorizontalHeaderItem(3, __qtablewidgetitem302);
        QTableWidgetItem *__qtablewidgetitem303 = new QTableWidgetItem();
        MU_transmission_TblWidget->setHorizontalHeaderItem(4, __qtablewidgetitem303);
        QTableWidgetItem *__qtablewidgetitem304 = new QTableWidgetItem();
        MU_transmission_TblWidget->setHorizontalHeaderItem(5, __qtablewidgetitem304);
        QTableWidgetItem *__qtablewidgetitem305 = new QTableWidgetItem();
        MU_transmission_TblWidget->setHorizontalHeaderItem(6, __qtablewidgetitem305);
        MU_transmission_TblWidget->setObjectName(QString::fromUtf8("MU_transmission_TblWidget"));

        gridLayout_15->addWidget(MU_transmission_TblWidget, 0, 0, 1, 1);

        MU_update_TabWidget->addTab(MU_transmission_tab, QString());
        MU_dispersion_tab = new QWidget();
        MU_dispersion_tab->setObjectName(QString::fromUtf8("MU_dispersion_tab"));
        gridLayout_24 = new QGridLayout(MU_dispersion_tab);
        gridLayout_24->setSpacing(0);
        gridLayout_24->setContentsMargins(0, 0, 0, 0);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        MU_dispersion_TblWidget = new QTableWidget(MU_dispersion_tab);
        if (MU_dispersion_TblWidget->columnCount() < 7)
            MU_dispersion_TblWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem306 = new QTableWidgetItem();
        MU_dispersion_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem306);
        QTableWidgetItem *__qtablewidgetitem307 = new QTableWidgetItem();
        MU_dispersion_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem307);
        QTableWidgetItem *__qtablewidgetitem308 = new QTableWidgetItem();
        MU_dispersion_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem308);
        QTableWidgetItem *__qtablewidgetitem309 = new QTableWidgetItem();
        MU_dispersion_TblWidget->setHorizontalHeaderItem(3, __qtablewidgetitem309);
        QTableWidgetItem *__qtablewidgetitem310 = new QTableWidgetItem();
        MU_dispersion_TblWidget->setHorizontalHeaderItem(4, __qtablewidgetitem310);
        QTableWidgetItem *__qtablewidgetitem311 = new QTableWidgetItem();
        MU_dispersion_TblWidget->setHorizontalHeaderItem(5, __qtablewidgetitem311);
        QTableWidgetItem *__qtablewidgetitem312 = new QTableWidgetItem();
        MU_dispersion_TblWidget->setHorizontalHeaderItem(6, __qtablewidgetitem312);
        MU_dispersion_TblWidget->setObjectName(QString::fromUtf8("MU_dispersion_TblWidget"));

        gridLayout_24->addWidget(MU_dispersion_TblWidget, 0, 0, 1, 1);

        MU_update_TabWidget->addTab(MU_dispersion_tab, QString());
        MU_RSLT_Tab = new QWidget();
        MU_RSLT_Tab->setObjectName(QString::fromUtf8("MU_RSLT_Tab"));
        gridLayout_5 = new QGridLayout(MU_RSLT_Tab);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        MU_RSLT_TabWidget = new QTableWidget(MU_RSLT_Tab);
        if (MU_RSLT_TabWidget->columnCount() < 24)
            MU_RSLT_TabWidget->setColumnCount(24);
        QTableWidgetItem *__qtablewidgetitem313 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(0, __qtablewidgetitem313);
        QTableWidgetItem *__qtablewidgetitem314 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(1, __qtablewidgetitem314);
        QTableWidgetItem *__qtablewidgetitem315 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(2, __qtablewidgetitem315);
        QTableWidgetItem *__qtablewidgetitem316 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(3, __qtablewidgetitem316);
        QTableWidgetItem *__qtablewidgetitem317 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(4, __qtablewidgetitem317);
        QTableWidgetItem *__qtablewidgetitem318 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(5, __qtablewidgetitem318);
        QTableWidgetItem *__qtablewidgetitem319 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(6, __qtablewidgetitem319);
        QTableWidgetItem *__qtablewidgetitem320 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(7, __qtablewidgetitem320);
        QTableWidgetItem *__qtablewidgetitem321 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(8, __qtablewidgetitem321);
        QTableWidgetItem *__qtablewidgetitem322 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(9, __qtablewidgetitem322);
        QTableWidgetItem *__qtablewidgetitem323 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(10, __qtablewidgetitem323);
        QTableWidgetItem *__qtablewidgetitem324 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(11, __qtablewidgetitem324);
        QTableWidgetItem *__qtablewidgetitem325 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(12, __qtablewidgetitem325);
        QTableWidgetItem *__qtablewidgetitem326 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(13, __qtablewidgetitem326);
        QTableWidgetItem *__qtablewidgetitem327 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(14, __qtablewidgetitem327);
        QTableWidgetItem *__qtablewidgetitem328 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(15, __qtablewidgetitem328);
        QTableWidgetItem *__qtablewidgetitem329 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(16, __qtablewidgetitem329);
        QTableWidgetItem *__qtablewidgetitem330 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(17, __qtablewidgetitem330);
        QTableWidgetItem *__qtablewidgetitem331 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(18, __qtablewidgetitem331);
        QTableWidgetItem *__qtablewidgetitem332 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(19, __qtablewidgetitem332);
        QTableWidgetItem *__qtablewidgetitem333 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(20, __qtablewidgetitem333);
        QTableWidgetItem *__qtablewidgetitem334 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(21, __qtablewidgetitem334);
        QTableWidgetItem *__qtablewidgetitem335 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(22, __qtablewidgetitem335);
        QTableWidgetItem *__qtablewidgetitem336 = new QTableWidgetItem();
        MU_RSLT_TabWidget->setHorizontalHeaderItem(23, __qtablewidgetitem336);
        MU_RSLT_TabWidget->setObjectName(QString::fromUtf8("MU_RSLT_TabWidget"));

        gridLayout_5->addWidget(MU_RSLT_TabWidget, 0, 0, 1, 1);

        MU_update_TabWidget->addTab(MU_RSLT_Tab, QString());

        gridLayout_16->addWidget(MU_update_TabWidget, 1, 0, 1, 1);


        gridLayout_20->addWidget(EM_update_info_GpBox, 0, 1, 1, 1);

        stackedWidget->addWidget(EM_update_page);
        EM_options_page = new QWidget();
        EM_options_page->setObjectName(QString::fromUtf8("EM_options_page"));
        gridLayout_22 = new QGridLayout(EM_options_page);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(0, 0, 0, 0);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        gridLayout_22->setHorizontalSpacing(0);
        gridLayout_22->setVerticalSpacing(5);
        EM_options_setArg_Frame = new QFrame(EM_options_page);
        EM_options_setArg_Frame->setObjectName(QString::fromUtf8("EM_options_setArg_Frame"));
        EM_options_setArg_Frame->setStyleSheet(QString::fromUtf8("#EM_options_setArg_Frame{\n"
"	border-image: url(:baseTitle3.png);\n"
"}"));
        EM_options_setArg_Frame->setFrameShape(QFrame::StyledPanel);
        EM_options_setArg_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(EM_options_setArg_Frame);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(6, 6, 6, 6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        EM_options_setArg_Label = new QLabel(EM_options_setArg_Frame);
        EM_options_setArg_Label->setObjectName(QString::fromUtf8("EM_options_setArg_Label"));
        EM_options_setArg_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_6->addWidget(EM_options_setArg_Label, 0, 0, 1, 1);

        EM_options_HLSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(EM_options_HLSpacer, 0, 1, 1, 1);


        gridLayout_22->addWidget(EM_options_setArg_Frame, 0, 0, 1, 1);

        EM_options_check_Frame = new QFrame(EM_options_page);
        EM_options_check_Frame->setObjectName(QString::fromUtf8("EM_options_check_Frame"));
        EM_options_check_Frame->setStyleSheet(QString::fromUtf8("#EM_options_check_Frame{\n"
"	border-image: url(:baseTitle3.png);\n"
"}"));
        EM_options_check_Frame->setFrameShape(QFrame::StyledPanel);
        EM_options_check_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(EM_options_check_Frame);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 3, 0, 3);
        EM_options_check_Label = new QLabel(EM_options_check_Frame);
        EM_options_check_Label->setObjectName(QString::fromUtf8("EM_options_check_Label"));
        EM_options_check_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(EM_options_check_Label, 0, 0, 1, 1);

        EM_options_check_LnEdit = new QLineEdit(EM_options_check_Frame);
        EM_options_check_LnEdit->setObjectName(QString::fromUtf8("EM_options_check_LnEdit"));
        EM_options_check_LnEdit->setEnabled(false);

        gridLayout_10->addWidget(EM_options_check_LnEdit, 0, 2, 1, 1);

        EM_options_check_PsBtn = new QPushButton(EM_options_check_Frame);
        EM_options_check_PsBtn->setObjectName(QString::fromUtf8("EM_options_check_PsBtn"));
        EM_options_check_PsBtn->setEnabled(false);

        gridLayout_10->addWidget(EM_options_check_PsBtn, 0, 3, 1, 1);


        gridLayout_22->addWidget(EM_options_check_Frame, 2, 0, 1, 1);

        EM_options_check_TxtBrowser = new QTextBrowser(EM_options_page);
        EM_options_check_TxtBrowser->setObjectName(QString::fromUtf8("EM_options_check_TxtBrowser"));

        gridLayout_22->addWidget(EM_options_check_TxtBrowser, 3, 0, 1, 1);

        EM_options_setArg_GpBox = new QGroupBox(EM_options_page);
        EM_options_setArg_GpBox->setObjectName(QString::fromUtf8("EM_options_setArg_GpBox"));
        sizePolicy.setHeightForWidth(EM_options_setArg_GpBox->sizePolicy().hasHeightForWidth());
        EM_options_setArg_GpBox->setSizePolicy(sizePolicy);
        gridLayout_12 = new QGridLayout(EM_options_setArg_GpBox);
        gridLayout_12->setSpacing(5);
        gridLayout_12->setContentsMargins(5, 5, 5, 5);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        EM_options_setArg_Oracle_PsBtn = new QPushButton(EM_options_setArg_GpBox);
        EM_options_setArg_Oracle_PsBtn->setObjectName(QString::fromUtf8("EM_options_setArg_Oracle_PsBtn"));

        gridLayout_12->addWidget(EM_options_setArg_Oracle_PsBtn, 0, 0, 1, 1);

        EM_options_setArg_localSqlPath_PsBtn = new QPushButton(EM_options_setArg_GpBox);
        EM_options_setArg_localSqlPath_PsBtn->setObjectName(QString::fromUtf8("EM_options_setArg_localSqlPath_PsBtn"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(EM_options_setArg_localSqlPath_PsBtn->sizePolicy().hasHeightForWidth());
        EM_options_setArg_localSqlPath_PsBtn->setSizePolicy(sizePolicy8);
        EM_options_setArg_localSqlPath_PsBtn->setMinimumSize(QSize(5, 4));

        gridLayout_12->addWidget(EM_options_setArg_localSqlPath_PsBtn, 4, 0, 1, 1);

        EM_options_appKey_Lable = new QLabel(EM_options_setArg_GpBox);
        EM_options_appKey_Lable->setObjectName(QString::fromUtf8("EM_options_appKey_Lable"));
        EM_options_appKey_Lable->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(EM_options_appKey_Lable, 0, 1, 1, 1);

        EM_options_appKey_LnEdit = new QLineEdit(EM_options_setArg_GpBox);
        EM_options_appKey_LnEdit->setObjectName(QString::fromUtf8("EM_options_appKey_LnEdit"));
        EM_options_appKey_LnEdit->setMinimumSize(QSize(100, 0));
        EM_options_appKey_LnEdit->setMaximumSize(QSize(100, 16777215));

        gridLayout_12->addWidget(EM_options_appKey_LnEdit, 0, 2, 1, 1);

        EM_options_appSecret_Lable = new QLabel(EM_options_setArg_GpBox);
        EM_options_appSecret_Lable->setObjectName(QString::fromUtf8("EM_options_appSecret_Lable"));
        EM_options_appSecret_Lable->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(EM_options_appSecret_Lable, 0, 3, 1, 1);

        EM_options_detectEquipNo_PsBtn = new QPushButton(EM_options_setArg_GpBox);
        EM_options_detectEquipNo_PsBtn->setObjectName(QString::fromUtf8("EM_options_detectEquipNo_PsBtn"));

        gridLayout_12->addWidget(EM_options_detectEquipNo_PsBtn, 0, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_2, 0, 13, 1, 1);

        EM_options_detectEquipNo_LnEdit = new QLineEdit(EM_options_setArg_GpBox);
        EM_options_detectEquipNo_LnEdit->setObjectName(QString::fromUtf8("EM_options_detectEquipNo_LnEdit"));

        gridLayout_12->addWidget(EM_options_detectEquipNo_LnEdit, 0, 6, 1, 1);

        EM_options_appSecret_LnEdit = new QLineEdit(EM_options_setArg_GpBox);
        EM_options_appSecret_LnEdit->setObjectName(QString::fromUtf8("EM_options_appSecret_LnEdit"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(EM_options_appSecret_LnEdit->sizePolicy().hasHeightForWidth());
        EM_options_appSecret_LnEdit->setSizePolicy(sizePolicy9);
        EM_options_appSecret_LnEdit->setMinimumSize(QSize(220, 0));
        EM_options_appSecret_LnEdit->setMaximumSize(QSize(220, 16777215));

        gridLayout_12->addWidget(EM_options_appSecret_LnEdit, 0, 4, 1, 1);

        EM_options_setArg_localSqlPath_LnEdit = new QLineEdit(EM_options_setArg_GpBox);
        EM_options_setArg_localSqlPath_LnEdit->setObjectName(QString::fromUtf8("EM_options_setArg_localSqlPath_LnEdit"));
        EM_options_setArg_localSqlPath_LnEdit->setLayoutDirection(Qt::LeftToRight);

        gridLayout_12->addWidget(EM_options_setArg_localSqlPath_LnEdit, 4, 1, 1, 3);


        gridLayout_22->addWidget(EM_options_setArg_GpBox, 1, 0, 1, 1);

        stackedWidget->addWidget(EM_options_page);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(EM_down_Act);
        toolBar->addSeparator();
        toolBar->addAction(EM_update_Act);
        toolBar->addSeparator();
        toolBar->addAction(EM_options_Act);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        EM_down_TabWidget->setCurrentIndex(3);
        MU_update_TabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\277\241\346\201\257\345\214\226\345\271\263\345\217\260.\345\220\210\345\271\266\345\215\225\345\205\203.WH", 0, QApplication::UnicodeUTF8));
        EM_down_Act->setText(QApplication::translate("MainWindow", "\344\270\213\350\275\275\345\237\272\346\234\254\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        EM_down_Act->setToolTip(QApplication::translate("MainWindow", "\344\270\213\350\275\275\345\237\272\346\234\254\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        EM_options_Act->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        EM_update_Act->setText(QApplication::translate("MainWindow", "\344\270\212\344\274\240\346\240\241\351\252\214\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        EM_update_Act->setToolTip(QApplication::translate("MainWindow", "\344\270\212\344\274\240\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        EM_down_sampleInfo_PsBtn->setText(QApplication::translate("MainWindow", "\344\270\213\350\275\275\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        EM_down_barCode_LnEdit->setText(QApplication::translate("MainWindow", "KKKK001", 0, QApplication::UnicodeUTF8));
        EM_down_barCode_Label->setText(QApplication::translate("MainWindow", " \347\224\265\350\203\275\350\241\250\346\235\241\345\275\242\347\240\201: ", 0, QApplication::UnicodeUTF8));
        EM_down_clean_PsBtn->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\350\241\250\346\240\274", 0, QApplication::UnicodeUTF8));
        MU_down_GpBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260\346\225\260\346\215\256\345\272\223:", 0, QApplication::UnicodeUTF8));
        EM_down_saveLocalSql_PsBtn->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\350\241\250\346\240\274\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        EM_down_loadLocalSql_PsBtn->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\346\235\241\345\275\242\347\240\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        EM_down_deleteLocalSqlItem_PsBtn->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\346\235\241\345\275\242\347\240\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        EM_save_XML_PsBtn->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        EM_options_deleteLocalSqlAll_PsBtn->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\346\211\200\346\234\211\344\270\213\350\275\275\345\216\206\345\217\262\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = MU_sampleInfo_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "1sampleNo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = MU_sampleInfo_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "tableType", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = MU_sampleInfo_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "phaseType", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = MU_sampleInfo_TblWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "nominalVoltage", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = MU_sampleInfo_TblWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "5nominalCurrent", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = MU_sampleInfo_TblWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "sampleType", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = MU_sampleInfo_TblWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "nominalConstant", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = MU_sampleInfo_TblWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "reactiveConstant", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = MU_sampleInfo_TblWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "activeLevel", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = MU_sampleInfo_TblWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "10reactiveLevel", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = MU_sampleInfo_TblWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "freq", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = MU_sampleInfo_TblWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "inputMode", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = MU_sampleInfo_TblWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "isEmulator", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = MU_sampleInfo_TblWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "measurementDirection", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = MU_sampleInfo_TblWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "15sampleName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = MU_sampleInfo_TblWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "redSeal", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = MU_sampleInfo_TblWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "producer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = MU_sampleInfo_TblWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "sampleUserName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = MU_sampleInfo_TblWidget->horizontalHeaderItem(18);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "sampleManuNo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = MU_sampleInfo_TblWidget->horizontalHeaderItem(19);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "20sampleSeal", 0, QApplication::UnicodeUTF8));
        EM_down_TabWidget->setTabText(EM_down_TabWidget->indexOf(MU_sampleInfo_tab), QApplication::translate("MainWindow", "sampleInfo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = MU_METER_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "1METER_ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = MU_METER_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "2ERP_BATCH_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = MU_METER_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "3\346\235\241\345\275\242\347\240\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = MU_METER_TblWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "4\350\265\204\344\272\247\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = MU_METER_TblWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "5\345\207\272\345\216\202\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = MU_METER_TblWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "6LOT_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem26 = MU_METER_TblWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "7ORG_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem27 = MU_METER_TblWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "8ORG_TYPE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem28 = MU_METER_TblWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "9PR_ORG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem29 = MU_METER_TblWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "10BELONG_DEPT", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem30 = MU_METER_TblWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "11CONTRACT_ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem31 = MU_METER_TblWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "12CONTRACT_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem32 = MU_METER_TblWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "13RCV_ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem33 = MU_METER_TblWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "14ARRIVE_BATCH_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem34 = MU_METER_TblWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "15AREA_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem35 = MU_METER_TblWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "16STORE_AREA_SORT", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem36 = MU_METER_TblWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "17WH_ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem37 = MU_METER_TblWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "18WH_AREA_ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem38 = MU_METER_TblWidget->horizontalHeaderItem(18);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "19STORE_AREA_ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem39 = MU_METER_TblWidget->horizontalHeaderItem(19);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "20STORE_LOC_ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem40 = MU_METER_TblWidget->horizontalHeaderItem(20);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "21PALLET_BAR_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem41 = MU_METER_TblWidget->horizontalHeaderItem(21);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "22BOX_BAR_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem42 = MU_METER_TblWidget->horizontalHeaderItem(22);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "23SORT_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem43 = MU_METER_TblWidget->horizontalHeaderItem(23);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "24TYPE_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem44 = MU_METER_TblWidget->horizontalHeaderItem(24);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "25MODEL_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem45 = MU_METER_TblWidget->horizontalHeaderItem(25);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "26WIRING_MODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem46 = MU_METER_TblWidget->horizontalHeaderItem(26);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "27VOLT_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem47 = MU_METER_TblWidget->horizontalHeaderItem(27);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "28RATED_CURRENT", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem48 = MU_METER_TblWidget->horizontalHeaderItem(28);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "29OVERLOAD_FACTOR", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem49 = MU_METER_TblWidget->horizontalHeaderItem(29);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "30AP_PRE_LEVEL_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem50 = MU_METER_TblWidget->horizontalHeaderItem(30);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "31RP_PRE_LEVEL_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem51 = MU_METER_TblWidget->horizontalHeaderItem(31);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "32METER_DIGITS", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem52 = MU_METER_TblWidget->horizontalHeaderItem(32);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "33TS_DIGITS", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem53 = MU_METER_TblWidget->horizontalHeaderItem(33);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "34CONST_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem54 = MU_METER_TblWidget->horizontalHeaderItem(34);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "35RP_CONSTANT", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem55 = MU_METER_TblWidget->horizontalHeaderItem(35);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "36MANUFACTURER", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem56 = MU_METER_TblWidget->horizontalHeaderItem(36);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "37MADE_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem57 = MU_METER_TblWidget->horizontalHeaderItem(37);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "38EQIP_PRC", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem58 = MU_METER_TblWidget->horizontalHeaderItem(38);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "39SELF_FACTOR", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem59 = MU_METER_TblWidget->horizontalHeaderItem(39);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWindow", "40BOTH_WAY_CALC", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem60 = MU_METER_TblWidget->horizontalHeaderItem(40);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWindow", "41PREPAY_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem61 = MU_METER_TblWidget->horizontalHeaderItem(41);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWindow", "42MULTIRATE_FALG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem62 = MU_METER_TblWidget->horizontalHeaderItem(42);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWindow", "43DEMAND_METER_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem63 = MU_METER_TblWidget->horizontalHeaderItem(43);
        ___qtablewidgetitem63->setText(QApplication::translate("MainWindow", "44HARMONIC_MEAS_FALG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem64 = MU_METER_TblWidget->horizontalHeaderItem(44);
        ___qtablewidgetitem64->setText(QApplication::translate("MainWindow", "45CC_PREVENT_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem65 = MU_METER_TblWidget->horizontalHeaderItem(45);
        ___qtablewidgetitem65->setText(QApplication::translate("MainWindow", "46PULSE_CONSTANT_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem66 = MU_METER_TblWidget->horizontalHeaderItem(46);
        ___qtablewidgetitem66->setText(QApplication::translate("MainWindow", "47PULSE_AMPLITUDE_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem67 = MU_METER_TblWidget->horizontalHeaderItem(47);
        ___qtablewidgetitem67->setText(QApplication::translate("MainWindow", "48PULSE_SORT_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem68 = MU_METER_TblWidget->horizontalHeaderItem(48);
        ___qtablewidgetitem68->setText(QApplication::translate("MainWindow", "49FREQ_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem69 = MU_METER_TblWidget->horizontalHeaderItem(49);
        ___qtablewidgetitem69->setText(QApplication::translate("MainWindow", "50CON_MODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem70 = MU_METER_TblWidget->horizontalHeaderItem(50);
        ___qtablewidgetitem70->setText(QApplication::translate("MainWindow", "51READING_TYPE_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem71 = MU_METER_TblWidget->horizontalHeaderItem(51);
        ___qtablewidgetitem71->setText(QApplication::translate("MainWindow", "52METER_USAGE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem72 = MU_METER_TblWidget->horizontalHeaderItem(52);
        ___qtablewidgetitem72->setText(QApplication::translate("MainWindow", "53MEAS_THEORY", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem73 = MU_METER_TblWidget->horizontalHeaderItem(53);
        ___qtablewidgetitem73->setText(QApplication::translate("MainWindow", "54BEARING_STRUC", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem74 = MU_METER_TblWidget->horizontalHeaderItem(54);
        ___qtablewidgetitem74->setText(QApplication::translate("MainWindow", "55CI", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem75 = MU_METER_TblWidget->horizontalHeaderItem(55);
        ___qtablewidgetitem75->setText(QApplication::translate("MainWindow", "56RELAY_JOINT", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem76 = MU_METER_TblWidget->horizontalHeaderItem(56);
        ___qtablewidgetitem76->setText(QApplication::translate("MainWindow", "57ELEC_MEAS_DISP_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem77 = MU_METER_TblWidget->horizontalHeaderItem(57);
        ___qtablewidgetitem77->setText(QApplication::translate("MainWindow", "58VL_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem78 = MU_METER_TblWidget->horizontalHeaderItem(58);
        ___qtablewidgetitem78->setText(QApplication::translate("MainWindow", "59CL_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem79 = MU_METER_TblWidget->horizontalHeaderItem(59);
        ___qtablewidgetitem79->setText(QApplication::translate("MainWindow", "60ANTI_PHASE_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem80 = MU_METER_TblWidget->horizontalHeaderItem(60);
        ___qtablewidgetitem80->setText(QApplication::translate("MainWindow", "61SUPER_POWER_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem81 = MU_METER_TblWidget->horizontalHeaderItem(61);
        ___qtablewidgetitem81->setText(QApplication::translate("MainWindow", "62LOAD_CURVE_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem82 = MU_METER_TblWidget->horizontalHeaderItem(62);
        ___qtablewidgetitem82->setText(QApplication::translate("MainWindow", "63POWEROFF_MR_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem83 = MU_METER_TblWidget->horizontalHeaderItem(63);
        ___qtablewidgetitem83->setText(QApplication::translate("MainWindow", "64INFRARED_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem84 = MU_METER_TblWidget->horizontalHeaderItem(64);
        ___qtablewidgetitem84->setText(QApplication::translate("MainWindow", "65DOC_TYPE_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem85 = MU_METER_TblWidget->horizontalHeaderItem(65);
        ___qtablewidgetitem85->setText(QApplication::translate("MainWindow", "66LATEST_CHK_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem86 = MU_METER_TblWidget->horizontalHeaderItem(66);
        ___qtablewidgetitem86->setText(QApplication::translate("MainWindow", "67INST_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem87 = MU_METER_TblWidget->horizontalHeaderItem(67);
        ___qtablewidgetitem87->setText(QApplication::translate("MainWindow", "68RMV_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem88 = MU_METER_TblWidget->horizontalHeaderItem(68);
        ___qtablewidgetitem88->setText(QApplication::translate("MainWindow", "69ROTATE_CYCLE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem89 = MU_METER_TblWidget->horizontalHeaderItem(69);
        ___qtablewidgetitem89->setText(QApplication::translate("MainWindow", "70DISCARD_REASON", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem90 = MU_METER_TblWidget->horizontalHeaderItem(70);
        ___qtablewidgetitem90->setText(QApplication::translate("MainWindow", "71DESCARD_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem91 = MU_METER_TblWidget->horizontalHeaderItem(71);
        ___qtablewidgetitem91->setText(QApplication::translate("MainWindow", "72PR_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem92 = MU_METER_TblWidget->horizontalHeaderItem(72);
        ___qtablewidgetitem92->setText(QApplication::translate("MainWindow", "73HANDOVER_DEPT", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem93 = MU_METER_TblWidget->horizontalHeaderItem(73);
        ___qtablewidgetitem93->setText(QApplication::translate("MainWindow", "74HANDOVER_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem94 = MU_METER_TblWidget->horizontalHeaderItem(74);
        ___qtablewidgetitem94->setText(QApplication::translate("MainWindow", "75CUR_STATUS_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem95 = MU_METER_TblWidget->horizontalHeaderItem(75);
        ___qtablewidgetitem95->setText(QApplication::translate("MainWindow", "76BORROW_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem96 = MU_METER_TblWidget->horizontalHeaderItem(76);
        ___qtablewidgetitem96->setText(QApplication::translate("MainWindow", "77NEW_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem97 = MU_METER_TblWidget->horizontalHeaderItem(77);
        ___qtablewidgetitem97->setText(QApplication::translate("MainWindow", "78DOC_CREATOR_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem98 = MU_METER_TblWidget->horizontalHeaderItem(78);
        ___qtablewidgetitem98->setText(QApplication::translate("MainWindow", "79DOC_CREATE_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem99 = MU_METER_TblWidget->horizontalHeaderItem(79);
        ___qtablewidgetitem99->setText(QApplication::translate("MainWindow", "80BAUDRATE_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem100 = MU_METER_TblWidget->horizontalHeaderItem(80);
        ___qtablewidgetitem100->setText(QApplication::translate("MainWindow", "81METER_CLOSE_MODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem101 = MU_METER_TblWidget->horizontalHeaderItem(81);
        ___qtablewidgetitem101->setText(QApplication::translate("MainWindow", "82REGISTER_MODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem102 = MU_METER_TblWidget->horizontalHeaderItem(82);
        ___qtablewidgetitem102->setText(QApplication::translate("MainWindow", "83DISP_MODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem103 = MU_METER_TblWidget->horizontalHeaderItem(83);
        ___qtablewidgetitem103->setText(QApplication::translate("MainWindow", "84HARD_VER", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem104 = MU_METER_TblWidget->horizontalHeaderItem(84);
        ___qtablewidgetitem104->setText(QApplication::translate("MainWindow", "85SOFT_VER", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem105 = MU_METER_TblWidget->horizontalHeaderItem(85);
        ___qtablewidgetitem105->setText(QApplication::translate("MainWindow", "86RS485_ROUTE_QTY", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem106 = MU_METER_TblWidget->horizontalHeaderItem(86);
        ___qtablewidgetitem106->setText(QApplication::translate("MainWindow", "87COMM_PROT_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem107 = MU_METER_TblWidget->horizontalHeaderItem(87);
        ___qtablewidgetitem107->setText(QApplication::translate("MainWindow", "88COMM_MODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem108 = MU_METER_TblWidget->horizontalHeaderItem(88);
        ___qtablewidgetitem108->setText(QApplication::translate("MainWindow", "89ATTACHEQUIP_TYPE_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem109 = MU_METER_TblWidget->horizontalHeaderItem(89);
        ___qtablewidgetitem109->setText(QApplication::translate("MainWindow", "90CARRIER_WAVE_ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem110 = MU_METER_TblWidget->horizontalHeaderItem(90);
        ___qtablewidgetitem110->setText(QApplication::translate("MainWindow", "91REMARK", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem111 = MU_METER_TblWidget->horizontalHeaderItem(91);
        ___qtablewidgetitem111->setText(QApplication::translate("MainWindow", "92WRITE_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem112 = MU_METER_TblWidget->horizontalHeaderItem(92);
        ___qtablewidgetitem112->setText(QApplication::translate("MainWindow", "93HANDLE_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem113 = MU_METER_TblWidget->horizontalHeaderItem(93);
        ___qtablewidgetitem113->setText(QApplication::translate("MainWindow", "94HANDLE_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem114 = MU_METER_TblWidget->horizontalHeaderItem(94);
        ___qtablewidgetitem114->setText(QApplication::translate("MainWindow", "95LATEST_DETECT_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem115 = MU_METER_TblWidget->horizontalHeaderItem(95);
        ___qtablewidgetitem115->setText(QApplication::translate("MainWindow", "96CHIP_MANUFACTURER", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem116 = MU_METER_TblWidget->horizontalHeaderItem(96);
        ___qtablewidgetitem116->setText(QApplication::translate("MainWindow", "97CHIP_MODEL_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem117 = MU_METER_TblWidget->horizontalHeaderItem(97);
        ___qtablewidgetitem117->setText(QApplication::translate("MainWindow", "98TARIFF_TYPE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem118 = MU_METER_TblWidget->verticalHeaderItem(0);
        ___qtablewidgetitem118->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = MU_METER_TblWidget->isSortingEnabled();
        MU_METER_TblWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem119 = MU_METER_TblWidget->item(0, 0);
        ___qtablewidgetitem119->setText(QApplication::translate("MainWindow", "8.00000004239316e15", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem120 = MU_METER_TblWidget->item(0, 2);
        ___qtablewidgetitem120->setText(QApplication::translate("MainWindow", "4230001001000016254452", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem121 = MU_METER_TblWidget->item(0, 3);
        ___qtablewidgetitem121->setText(QApplication::translate("MainWindow", "4230000100001623445", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem122 = MU_METER_TblWidget->item(0, 4);
        ___qtablewidgetitem122->setText(QApplication::translate("MainWindow", "00100001625445", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem123 = MU_METER_TblWidget->item(0, 5);
        ___qtablewidgetitem123->setText(QApplication::translate("MainWindow", "2614091130544989", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem124 = MU_METER_TblWidget->item(0, 6);
        ___qtablewidgetitem124->setText(QApplication::translate("MainWindow", "42102", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem125 = MU_METER_TblWidget->item(0, 8);
        ___qtablewidgetitem125->setText(QApplication::translate("MainWindow", "42102", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem126 = MU_METER_TblWidget->item(0, 9);
        ___qtablewidgetitem126->setText(QApplication::translate("MainWindow", "42102", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem127 = MU_METER_TblWidget->item(0, 13);
        ___qtablewidgetitem127->setText(QApplication::translate("MainWindow", "2614091130544989", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem128 = MU_METER_TblWidget->item(0, 14);
        ___qtablewidgetitem128->setText(QApplication::translate("MainWindow", "102", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem129 = MU_METER_TblWidget->item(0, 22);
        ___qtablewidgetitem129->setText(QApplication::translate("MainWindow", "10", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem130 = MU_METER_TblWidget->item(0, 23);
        ___qtablewidgetitem130->setText(QApplication::translate("MainWindow", "26", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem131 = MU_METER_TblWidget->item(0, 24);
        ___qtablewidgetitem131->setText(QApplication::translate("MainWindow", "03532", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem132 = MU_METER_TblWidget->item(0, 25);
        ___qtablewidgetitem132->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem133 = MU_METER_TblWidget->item(0, 26);
        ___qtablewidgetitem133->setText(QApplication::translate("MainWindow", "03", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem134 = MU_METER_TblWidget->item(0, 27);
        ___qtablewidgetitem134->setText(QApplication::translate("MainWindow", "00200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem135 = MU_METER_TblWidget->item(0, 29);
        ___qtablewidgetitem135->setText(QApplication::translate("MainWindow", "01", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem136 = MU_METER_TblWidget->item(0, 31);
        ___qtablewidgetitem136->setText(QApplication::translate("MainWindow", "5.400000", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem137 = MU_METER_TblWidget->item(0, 33);
        ___qtablewidgetitem137->setText(QApplication::translate("MainWindow", "78", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem138 = MU_METER_TblWidget->item(0, 35);
        ___qtablewidgetitem138->setText(QApplication::translate("MainWindow", "10328", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem139 = MU_METER_TblWidget->item(0, 36);
        ___qtablewidgetitem139->setText(QApplication::translate("MainWindow", "2014/9/5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem140 = MU_METER_TblWidget->item(0, 38);
        ___qtablewidgetitem140->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem141 = MU_METER_TblWidget->item(0, 40);
        ___qtablewidgetitem141->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem142 = MU_METER_TblWidget->item(0, 41);
        ___qtablewidgetitem142->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem143 = MU_METER_TblWidget->item(0, 42);
        ___qtablewidgetitem143->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem144 = MU_METER_TblWidget->item(0, 43);
        ___qtablewidgetitem144->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem145 = MU_METER_TblWidget->item(0, 49);
        ___qtablewidgetitem145->setText(QApplication::translate("MainWindow", "01", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem146 = MU_METER_TblWidget->item(0, 50);
        ___qtablewidgetitem146->setText(QApplication::translate("MainWindow", "21", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem147 = MU_METER_TblWidget->item(0, 52);
        ___qtablewidgetitem147->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem148 = MU_METER_TblWidget->item(0, 64);
        ___qtablewidgetitem148->setText(QApplication::translate("MainWindow", "02", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem149 = MU_METER_TblWidget->item(0, 68);
        ___qtablewidgetitem149->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem150 = MU_METER_TblWidget->item(0, 71);
        ___qtablewidgetitem150->setText(QApplication::translate("MainWindow", "01", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem151 = MU_METER_TblWidget->item(0, 74);
        ___qtablewidgetitem151->setText(QApplication::translate("MainWindow", "001", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem152 = MU_METER_TblWidget->item(0, 76);
        ___qtablewidgetitem152->setText(QApplication::translate("MainWindow", "01", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem153 = MU_METER_TblWidget->item(0, 77);
        ___qtablewidgetitem153->setText(QApplication::translate("MainWindow", "SJL0000", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem154 = MU_METER_TblWidget->item(0, 78);
        ___qtablewidgetitem154->setText(QApplication::translate("MainWindow", "2014/9/11", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem155 = MU_METER_TblWidget->item(0, 86);
        ___qtablewidgetitem155->setText(QApplication::translate("MainWindow", "02", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem156 = MU_METER_TblWidget->item(0, 87);
        ___qtablewidgetitem156->setText(QApplication::translate("MainWindow", "01", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem157 = MU_METER_TblWidget->item(0, 91);
        ___qtablewidgetitem157->setText(QApplication::translate("MainWindow", "2014/9/11 14:28:53", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem158 = MU_METER_TblWidget->item(0, 92);
        ___qtablewidgetitem158->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        MU_METER_TblWidget->setSortingEnabled(__sortingEnabled);

        EM_down_TabWidget->setTabText(EM_down_TabWidget->indexOf(MU_METER_tab), QApplication::translate("MainWindow", "MT_METER(A.4)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem159 = EM_P_CODE_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem159->setText(QApplication::translate("MainWindow", "BAR_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem160 = EM_P_CODE_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem160->setText(QApplication::translate("MainWindow", "1.CODE_ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem161 = EM_P_CODE_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem161->setText(QApplication::translate("MainWindow", "CODE_SORT_ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem162 = EM_P_CODE_TblWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem162->setText(QApplication::translate("MainWindow", "P_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem163 = EM_P_CODE_TblWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem163->setText(QApplication::translate("MainWindow", "CODE_TYPE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem164 = EM_P_CODE_TblWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem164->setText(QApplication::translate("MainWindow", "ORG_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem165 = EM_P_CODE_TblWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem165->setText(QApplication::translate("MainWindow", "VALUE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem166 = EM_P_CODE_TblWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem166->setText(QApplication::translate("MainWindow", "NAME", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem167 = EM_P_CODE_TblWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem167->setText(QApplication::translate("MainWindow", "DISP_SN", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem168 = EM_P_CODE_TblWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem168->setText(QApplication::translate("MainWindow", "CONTENT1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem169 = EM_P_CODE_TblWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem169->setText(QApplication::translate("MainWindow", "10CONTENT2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem170 = EM_P_CODE_TblWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem170->setText(QApplication::translate("MainWindow", "CONTENT3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem171 = EM_P_CODE_TblWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem171->setText(QApplication::translate("MainWindow", "CONTENT4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem172 = EM_P_CODE_TblWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem172->setText(QApplication::translate("MainWindow", "CONTENT5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem173 = EM_P_CODE_TblWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem173->setText(QApplication::translate("MainWindow", "PROVINCE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem174 = EM_P_CODE_TblWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem174->setText(QApplication::translate("MainWindow", "HANDLE_PROVINCE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem175 = EM_P_CODE_TblWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem175->setText(QApplication::translate("MainWindow", "HANDLE_TYPE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem176 = EM_P_CODE_TblWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem176->setText(QApplication::translate("MainWindow", "CONTENT9", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem177 = EM_P_CODE_TblWidget->horizontalHeaderItem(18);
        ___qtablewidgetitem177->setText(QApplication::translate("MainWindow", "CONTENT6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem178 = EM_P_CODE_TblWidget->horizontalHeaderItem(19);
        ___qtablewidgetitem178->setText(QApplication::translate("MainWindow", "CONTENT7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem179 = EM_P_CODE_TblWidget->horizontalHeaderItem(20);
        ___qtablewidgetitem179->setText(QApplication::translate("MainWindow", "20CONTENT8", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem180 = EM_P_CODE_TblWidget->verticalHeaderItem(0);
        ___qtablewidgetitem180->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem181 = EM_P_CODE_TblWidget->verticalHeaderItem(1);
        ___qtablewidgetitem181->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = EM_P_CODE_TblWidget->isSortingEnabled();
        EM_P_CODE_TblWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem182 = EM_P_CODE_TblWidget->item(0, 0);
        ___qtablewidgetitem182->setText(QApplication::translate("MainWindow", "4230001001000016254452", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem183 = EM_P_CODE_TblWidget->item(0, 1);
        ___qtablewidgetitem183->setText(QApplication::translate("MainWindow", "208562", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem184 = EM_P_CODE_TblWidget->item(0, 2);
        ___qtablewidgetitem184->setText(QApplication::translate("MainWindow", "157187", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem185 = EM_P_CODE_TblWidget->item(0, 6);
        ___qtablewidgetitem185->setText(QApplication::translate("MainWindow", "10328", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem186 = EM_P_CODE_TblWidget->item(0, 13);
        ___qtablewidgetitem186->setText(QApplication::translate("MainWindow", "p_code", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem187 = EM_P_CODE_TblWidget->item(0, 14);
        ___qtablewidgetitem187->setText(QApplication::translate("MainWindow", "ABB(\344\270\255\345\233\275)\346\234\211\351\231\220\345\205\254\345\217\270", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem188 = EM_P_CODE_TblWidget->item(1, 0);
        ___qtablewidgetitem188->setText(QApplication::translate("MainWindow", "4230001001000016254451", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem189 = EM_P_CODE_TblWidget->item(1, 1);
        ___qtablewidgetitem189->setText(QApplication::translate("MainWindow", "208562", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem190 = EM_P_CODE_TblWidget->item(1, 2);
        ___qtablewidgetitem190->setText(QApplication::translate("MainWindow", "157187", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem191 = EM_P_CODE_TblWidget->item(1, 6);
        ___qtablewidgetitem191->setText(QApplication::translate("MainWindow", "10328", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem192 = EM_P_CODE_TblWidget->item(1, 13);
        ___qtablewidgetitem192->setText(QApplication::translate("MainWindow", "p_code", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem193 = EM_P_CODE_TblWidget->item(1, 14);
        ___qtablewidgetitem193->setText(QApplication::translate("MainWindow", "ABB(\344\270\255\345\233\275)\346\234\211\351\231\220\345\205\254\345\217\270", 0, QApplication::UnicodeUTF8));
        EM_P_CODE_TblWidget->setSortingEnabled(__sortingEnabled1);

        EM_down_TabWidget->setTabText(EM_down_TabWidget->indexOf(EM_P_CODE_tab), QApplication::translate("MainWindow", "MT_P_CODE(A.3)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem194 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem194->setText(QApplication::translate("MainWindow", "barCode", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem195 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem195->setText(QApplication::translate("MainWindow", "1.\346\243\200\345\256\232\344\273\273\345\212\241\345\215\225\347\274\226\345\217\267.DETECT_TASK_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem196 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem196->setText(QApplication::translate("MainWindow", "TASK_PRIO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem197 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem197->setText(QApplication::translate("MainWindow", "DETECT_MODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem198 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem198->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\274\226\345\217\267.SYS_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem199 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem199->setText(QApplication::translate("MainWindow", "\345\210\260\350\264\247\346\211\271\346\254\241\345\217\267.ARRIVE_BATCH_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem200 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem200->setText(QApplication::translate("MainWindow", "EQUIP_CATEG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem201 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem201->setText(QApplication::translate("MainWindow", "MODEL_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem202 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem202->setText(QApplication::translate("MainWindow", "SCHEMA_ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem203 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem203->setText(QApplication::translate("MainWindow", "REDETECT_SCHEMA", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem204 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem204->setText(QApplication::translate("MainWindow", "10.REDETECT_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem205 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem205->setText(QApplication::translate("MainWindow", "REDETECT_QTY", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem206 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem206->setText(QApplication::translate("MainWindow", "EQUIP_QTY", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem207 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem207->setText(QApplication::translate("MainWindow", "PILE_QTY", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem208 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem208->setText(QApplication::translate("MainWindow", "TASK_STATUS", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem209 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem209->setText(QApplication::translate("MainWindow", "HANDLE_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem210 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem210->setText(QApplication::translate("MainWindow", "HANDLE_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem211 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem211->setText(QApplication::translate("MainWindow", "WRITE_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem212 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(18);
        ___qtablewidgetitem212->setText(QApplication::translate("MainWindow", "ERP_BATCH_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem213 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(19);
        ___qtablewidgetitem213->setText(QApplication::translate("MainWindow", "TASK_TYPE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem214 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(20);
        ___qtablewidgetitem214->setText(QApplication::translate("MainWindow", "20.EQUIP_STATUS_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem215 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(21);
        ___qtablewidgetitem215->setText(QApplication::translate("MainWindow", "\346\243\200\351\252\214\344\272\272.EXEC_RESP_NAME", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem216 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(22);
        ___qtablewidgetitem216->setText(QApplication::translate("MainWindow", "\346\240\270\351\252\214\344\272\272.APPR_NAME", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem217 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(23);
        ___qtablewidgetitem217->setText(QApplication::translate("MainWindow", "IS_AUTO_SEAL", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem218 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(24);
        ___qtablewidgetitem218->setText(QApplication::translate("MainWindow", "EQUIP_CODE_NEW", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem219 = EM_DETECT_TASK_TblWidget->horizontalHeaderItem(25);
        ___qtablewidgetitem219->setText(QApplication::translate("MainWindow", "PARAM_TYPE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem220 = EM_DETECT_TASK_TblWidget->verticalHeaderItem(0);
        ___qtablewidgetitem220->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled2 = EM_DETECT_TASK_TblWidget->isSortingEnabled();
        EM_DETECT_TASK_TblWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem221 = EM_DETECT_TASK_TblWidget->item(0, 0);
        ___qtablewidgetitem221->setText(QApplication::translate("MainWindow", "4230001001000016254452", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem222 = EM_DETECT_TASK_TblWidget->item(0, 1);
        ___qtablewidgetitem222->setText(QApplication::translate("MainWindow", "3915071337300813", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem223 = EM_DETECT_TASK_TblWidget->item(0, 2);
        ___qtablewidgetitem223->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem224 = EM_DETECT_TASK_TblWidget->item(0, 3);
        ___qtablewidgetitem224->setText(QApplication::translate("MainWindow", "03", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem225 = EM_DETECT_TASK_TblWidget->item(0, 4);
        ___qtablewidgetitem225->setText(QApplication::translate("MainWindow", "402", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem226 = EM_DETECT_TASK_TblWidget->item(0, 5);
        ___qtablewidgetitem226->setText(QApplication::translate("MainWindow", "2614091130544989", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem227 = EM_DETECT_TASK_TblWidget->item(0, 6);
        ___qtablewidgetitem227->setText(QApplication::translate("MainWindow", "01", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem228 = EM_DETECT_TASK_TblWidget->item(0, 7);
        ___qtablewidgetitem228->setText(QApplication::translate("MainWindow", "03532", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem229 = EM_DETECT_TASK_TblWidget->item(0, 8);
        ___qtablewidgetitem229->setText(QApplication::translate("MainWindow", "8.000000002000377E15", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem230 = EM_DETECT_TASK_TblWidget->item(0, 12);
        ___qtablewidgetitem230->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem231 = EM_DETECT_TASK_TblWidget->item(0, 14);
        ___qtablewidgetitem231->setText(QApplication::translate("MainWindow", "00", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem232 = EM_DETECT_TASK_TblWidget->item(0, 16);
        ___qtablewidgetitem232->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem233 = EM_DETECT_TASK_TblWidget->item(0, 17);
        ___qtablewidgetitem233->setText(QApplication::translate("MainWindow", "2015-07-14 08:15:01", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem234 = EM_DETECT_TASK_TblWidget->item(0, 19);
        ___qtablewidgetitem234->setText(QApplication::translate("MainWindow", "05", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem235 = EM_DETECT_TASK_TblWidget->item(0, 23);
        ___qtablewidgetitem235->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        EM_DETECT_TASK_TblWidget->setSortingEnabled(__sortingEnabled2);

        EM_down_TabWidget->setTabText(EM_down_TabWidget->indexOf(EM_DETECT_TASK_tab), QApplication::translate("MainWindow", "MT_DETECT_TASK(B.7)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem236 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem236->setText(QApplication::translate("MainWindow", "DETECT_TASK_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem237 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem237->setText(QApplication::translate("MainWindow", "IO_TASK_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem238 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem238->setText(QApplication::translate("MainWindow", "EQUIP_CATEG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem239 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem239->setText(QApplication::translate("MainWindow", "BAR_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem240 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem240->setText(QApplication::translate("MainWindow", "BOX_BAR_CODE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem241 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem241->setText(QApplication::translate("MainWindow", "PILE_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem242 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem242->setText(QApplication::translate("MainWindow", "PLATFORM_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem243 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem243->setText(QApplication::translate("MainWindow", "SYS_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem244 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem244->setText(QApplication::translate("MainWindow", "WRITE_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem245 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem245->setText(QApplication::translate("MainWindow", "10.HANDLE_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem246 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem246->setText(QApplication::translate("MainWindow", "HANDLE_DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem247 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem247->setText(QApplication::translate("MainWindow", "ARRIVE_BATCH_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem248 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem248->setText(QApplication::translate("MainWindow", "REDETECT_FLAG", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem249 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem249->setText(QApplication::translate("MainWindow", "EMP_NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem250 = EM_DETECT_OUT_EQUIP_TblWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem250->setText(QApplication::translate("MainWindow", "PLATFORM_TYPE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem251 = EM_DETECT_OUT_EQUIP_TblWidget->verticalHeaderItem(0);
        ___qtablewidgetitem251->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled3 = EM_DETECT_OUT_EQUIP_TblWidget->isSortingEnabled();
        EM_DETECT_OUT_EQUIP_TblWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem252 = EM_DETECT_OUT_EQUIP_TblWidget->item(0, 0);
        ___qtablewidgetitem252->setText(QApplication::translate("MainWindow", "3915071337300813", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem253 = EM_DETECT_OUT_EQUIP_TblWidget->item(0, 1);
        ___qtablewidgetitem253->setText(QApplication::translate("MainWindow", "4415071437300816", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem254 = EM_DETECT_OUT_EQUIP_TblWidget->item(0, 2);
        ___qtablewidgetitem254->setText(QApplication::translate("MainWindow", "01", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem255 = EM_DETECT_OUT_EQUIP_TblWidget->item(0, 3);
        ___qtablewidgetitem255->setText(QApplication::translate("MainWindow", "4230001001000016254452", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem256 = EM_DETECT_OUT_EQUIP_TblWidget->item(0, 7);
        ___qtablewidgetitem256->setText(QApplication::translate("MainWindow", "402", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem257 = EM_DETECT_OUT_EQUIP_TblWidget->item(0, 8);
        ___qtablewidgetitem257->setText(QApplication::translate("MainWindow", "20150720", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem258 = EM_DETECT_OUT_EQUIP_TblWidget->item(0, 9);
        ___qtablewidgetitem258->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem259 = EM_DETECT_OUT_EQUIP_TblWidget->item(0, 11);
        ___qtablewidgetitem259->setText(QApplication::translate("MainWindow", "2614091130544989", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem260 = EM_DETECT_OUT_EQUIP_TblWidget->item(0, 13);
        ___qtablewidgetitem260->setText(QApplication::translate("MainWindow", "SJL0121", 0, QApplication::UnicodeUTF8));
        EM_DETECT_OUT_EQUIP_TblWidget->setSortingEnabled(__sortingEnabled3);

        EM_down_TabWidget->setTabText(EM_down_TabWidget->indexOf(EM_DETECT_OUT_EQUIP_tab), QApplication::translate("MainWindow", "MT_DETECT_OUT_EQUIP(B.8)", 0, QApplication::UnicodeUTF8));
        EM_update_loadDetectTaskNo_GpBox->setTitle(QString());
        EM_update_loadLocalSql_PsBtn->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245", 0, QApplication::UnicodeUTF8));
        EM_update_searchBarCode_LnEdit->setText(QApplication::translate("MainWindow", "KKKK001", 0, QApplication::UnicodeUTF8));
        EM_update_searchBarCode_Label->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\346\235\241\345\275\242\347\240\201", 0, QApplication::UnicodeUTF8));
        EM_update_loadDetectTaskNo_PsBtn->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\205\250\351\203\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem261 = MU_update_loadDetectTaskNo_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem261->setText(QApplication::translate("MainWindow", "MU\346\235\241\345\275\242\347\240\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem262 = MU_update_loadDetectTaskNo_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem262->setText(QApplication::translate("MainWindow", "ID", 0, QApplication::UnicodeUTF8));
        EM_update_info_GpBox->setTitle(QString());
        EM_update_results_PsBtn->setText(QApplication::translate("MainWindow", "\345\275\225\345\205\245\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        EM_creat_xml_PsBtn->setText(QApplication::translate("MainWindow", "\345\210\233\345\273\272XML", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem263 = MU_INTUIT_MET_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem263->setText(QApplication::translate("MainWindow", "1.\350\256\276\345\244\207\346\235\241\345\275\242\347\240\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem264 = MU_INTUIT_MET_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem264->setText(QApplication::translate("MainWindow", "\346\243\200\345\256\232\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem265 = MU_INTUIT_MET_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem265->setText(QApplication::translate("MainWindow", "\346\243\200\346\237\245\347\273\223\350\256\272", 0, QApplication::UnicodeUTF8));
        MU_update_TabWidget->setTabText(MU_update_TabWidget->indexOf(MU_INTUIT_MET_tab), QApplication::translate("MainWindow", "\345\244\226\350\247\202\346\243\200\346\237\245\347\273\223\350\256\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem266 = MU_BASICERR_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem266->setText(QApplication::translate("MainWindow", "1\346\235\241\345\275\242\347\240\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem267 = MU_BASICERR_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem267->setText(QApplication::translate("MainWindow", "\351\200\232\351\201\223\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem268 = MU_BASICERR_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem268->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\351\241\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem269 = MU_BASICERR_TblWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem269->setText(QApplication::translate("MainWindow", "\346\243\200\345\256\232\347\202\271%", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem270 = MU_BASICERR_TblWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem270->setText(QApplication::translate("MainWindow", "\346\240\207\345\207\206\346\234\211\346\225\210\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem271 = MU_BASICERR_TblWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem271->setText(QApplication::translate("MainWindow", "\350\242\253\346\243\200\346\234\211\346\225\210\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem272 = MU_BASICERR_TblWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem272->setText(QApplication::translate("MainWindow", "\346\240\207\345\207\206\351\242\221\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem273 = MU_BASICERR_TblWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem273->setText(QApplication::translate("MainWindow", "\350\242\253\346\243\200\351\242\221\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem274 = MU_BASICERR_TblWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem274->setText(QApplication::translate("MainWindow", "\346\257\224\345\267\256\345\235\207\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem275 = MU_BASICERR_TblWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem275->setText(QApplication::translate("MainWindow", "\350\247\222\345\267\256\345\235\207\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem276 = MU_BASICERR_TblWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem276->setText(QApplication::translate("MainWindow", "\351\242\221\345\267\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem277 = MU_BASICERR_TblWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem277->setText(QApplication::translate("MainWindow", "\345\244\232\346\254\241\346\257\224\345\267\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem278 = MU_BASICERR_TblWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem278->setText(QApplication::translate("MainWindow", "\345\244\232\346\254\241\350\247\222\345\267\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem279 = MU_BASICERR_TblWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem279->setText(QApplication::translate("MainWindow", "ID", 0, QApplication::UnicodeUTF8));
        MU_update_TabWidget->setTabText(MU_update_TabWidget->indexOf(MU_BASICERR_Tab), QApplication::translate("MainWindow", "\345\237\272\346\234\254\350\257\257\345\267\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem280 = MU_integrity_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem280->setText(QApplication::translate("MainWindow", "1.\346\235\241\345\275\242\347\240\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem281 = MU_integrity_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem281->setText(QApplication::translate("MainWindow", "\344\270\242\347\202\271\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem282 = MU_integrity_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem282->setText(QApplication::translate("MainWindow", "\346\200\273\347\202\271\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem283 = MU_integrity_TblWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem283->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\227\266\351\225\277", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem284 = MU_integrity_TblWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem284->setText(QApplication::translate("MainWindow", "5.\346\265\213\350\257\225\347\273\223\350\256\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem285 = MU_integrity_TblWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem285->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\265\213\350\257\225\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem286 = MU_integrity_TblWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem286->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\265\213\350\257\225\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem287 = MU_integrity_TblWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem287->setText(QApplication::translate("MainWindow", "ID", 0, QApplication::UnicodeUTF8));
        MU_update_TabWidget->setTabText(MU_update_TabWidget->indexOf(MU_integrity_Tab), QApplication::translate("MainWindow", "\345\256\214\346\225\264\346\200\247", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem288 = MU_transmission_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem288->setText(QApplication::translate("MainWindow", "1.\346\235\241\345\275\242\347\240\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem289 = MU_transmission_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem289->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem290 = MU_transmission_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem290->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem291 = MU_transmission_TblWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem291->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\227\266\351\225\277", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem292 = MU_transmission_TblWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem292->setText(QApplication::translate("MainWindow", "5.\346\234\200\345\244\247\344\274\240\350\276\223\345\273\266\346\227\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem293 = MU_transmission_TblWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem293->setText(QApplication::translate("MainWindow", "\347\273\223\350\256\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem294 = MU_transmission_TblWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem294->setText(QApplication::translate("MainWindow", "ID", 0, QApplication::UnicodeUTF8));
        MU_update_TabWidget->setTabText(MU_update_TabWidget->indexOf(MU_transmission_tab), QApplication::translate("MainWindow", "\344\274\240\350\276\223\345\273\266\346\227\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem295 = MU_dispersion_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem295->setText(QApplication::translate("MainWindow", "1.\346\235\241\345\275\242\347\240\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem296 = MU_dispersion_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem296->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem297 = MU_dispersion_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem297->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem298 = MU_dispersion_TblWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem298->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\227\266\351\225\277", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem299 = MU_dispersion_TblWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem299->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\347\246\273\346\225\243\345\272\246", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem300 = MU_dispersion_TblWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem300->setText(QApplication::translate("MainWindow", "\347\273\223\350\256\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem301 = MU_dispersion_TblWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem301->setText(QApplication::translate("MainWindow", "ID", 0, QApplication::UnicodeUTF8));
        MU_update_TabWidget->setTabText(MU_update_TabWidget->indexOf(MU_dispersion_tab), QApplication::translate("MainWindow", "\347\246\273\346\225\243\345\272\246", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem302 = MU_RSLT_TabWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem302->setText(QApplication::translate("MainWindow", "1\346\235\241\345\275\242\347\240\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem303 = MU_RSLT_TabWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem303->setText(QApplication::translate("MainWindow", "MuId ", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem304 = MU_RSLT_TabWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem304->setText(QApplication::translate("MainWindow", "\346\272\220Mac", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem305 = MU_RSLT_TabWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem305->setText(QApplication::translate("MainWindow", "\347\233\256\346\240\207Mac", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem306 = MU_RSLT_TabWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem306->setText(QApplication::translate("MainWindow", "5.appid", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem307 = MU_RSLT_TabWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem307->setText(QApplication::translate("MainWindow", "\346\250\241\346\213\237\351\207\217\347\224\265\345\216\213\351\242\235\345\256\232\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem308 = MU_RSLT_TabWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem308->setText(QApplication::translate("MainWindow", "\346\250\241\346\213\237\351\207\217\347\224\265\346\265\201\351\242\235\345\256\232\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem309 = MU_RSLT_TabWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem309->setText(QApplication::translate("MainWindow", "\346\225\260\345\255\227\351\207\217\347\224\265\345\216\213\351\242\235\345\256\232\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem310 = MU_RSLT_TabWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem310->setText(QApplication::translate("MainWindow", "\346\225\260\345\255\227\351\207\217\347\224\265\346\265\201\351\242\235\345\256\232\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem311 = MU_RSLT_TabWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem311->setText(QApplication::translate("MainWindow", "10.\345\220\214\346\255\245\346\226\271\345\274\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem312 = MU_RSLT_TabWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem312->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\265\213\350\257\225\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem313 = MU_RSLT_TabWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem313->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\277\235\345\255\230\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem314 = MU_RSLT_TabWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem314->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\345\221\230", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem315 = MU_RSLT_TabWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem315->setText(QApplication::translate("MainWindow", "\345\256\241\346\240\270\345\221\230", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem316 = MU_RSLT_TabWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem316->setText(QApplication::translate("MainWindow", "15\345\256\241\346\240\270\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem317 = MU_RSLT_TabWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem317->setText(QApplication::translate("MainWindow", "\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem318 = MU_RSLT_TabWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem318->setText(QApplication::translate("MainWindow", "\347\216\257\345\242\203", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem319 = MU_RSLT_TabWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem319->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem320 = MU_RSLT_TabWidget->horizontalHeaderItem(18);
        ___qtablewidgetitem320->setText(QApplication::translate("MainWindow", "\345\205\266\345\256\203", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem321 = MU_RSLT_TabWidget->horizontalHeaderItem(19);
        ___qtablewidgetitem321->setText(QApplication::translate("MainWindow", "20.ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem322 = MU_RSLT_TabWidget->horizontalHeaderItem(20);
        ___qtablewidgetitem322->setText(QApplication::translate("MainWindow", "\344\273\273\345\212\241\345\215\225\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem323 = MU_RSLT_TabWidget->horizontalHeaderItem(21);
        ___qtablewidgetitem323->setText(QApplication::translate("MainWindow", "\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem324 = MU_RSLT_TabWidget->horizontalHeaderItem(22);
        ___qtablewidgetitem324->setText(QApplication::translate("MainWindow", "\345\236\213\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem325 = MU_RSLT_TabWidget->horizontalHeaderItem(23);
        ___qtablewidgetitem325->setText(QApplication::translate("MainWindow", "\345\216\202\345\256\266", 0, QApplication::UnicodeUTF8));
        MU_update_TabWidget->setTabText(MU_update_TabWidget->indexOf(MU_RSLT_Tab), QApplication::translate("MainWindow", "\346\243\200\345\256\232\347\273\274\345\220\210\347\273\223\350\256\272", 0, QApplication::UnicodeUTF8));
        EM_options_setArg_Label->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260\351\205\215\347\275\256:  ", 0, QApplication::UnicodeUTF8));
        EM_options_check_Label->setText(QApplication::translate("MainWindow", "  SQL:  ", 0, QApplication::UnicodeUTF8));
        EM_options_check_LnEdit->setText(QApplication::translate("MainWindow", "select * from MT_DETECT_OUT_EQUIP where BAR_CODE ='4230001001000016254452'", 0, QApplication::UnicodeUTF8));
        EM_options_check_PsBtn->setText(QApplication::translate("MainWindow", "\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
        EM_options_check_TxtBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        EM_options_setArg_GpBox->setTitle(QApplication::translate("MainWindow", "\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
        EM_options_setArg_Oracle_PsBtn->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        EM_options_setArg_localSqlPath_PsBtn->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\350\267\257\345\276\204:", 0, QApplication::UnicodeUTF8));
        EM_options_appKey_Lable->setText(QApplication::translate("MainWindow", "appKey:", 0, QApplication::UnicodeUTF8));
        EM_options_appKey_LnEdit->setText(QApplication::translate("MainWindow", "169827", 0, QApplication::UnicodeUTF8));
        EM_options_appSecret_Lable->setText(QApplication::translate("MainWindow", "appSecret:", 0, QApplication::UnicodeUTF8));
        EM_options_detectEquipNo_PsBtn->setText(QApplication::translate("MainWindow", "\346\243\200\345\256\232\347\272\277\345\217\260\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        EM_options_detectEquipNo_LnEdit->setText(QString());
        EM_options_appSecret_LnEdit->setText(QApplication::translate("MainWindow", "2e33edf32o34492uf58f233ksl3er60f", 0, QApplication::UnicodeUTF8));
        EM_options_setArg_localSqlPath_LnEdit->setText(QApplication::translate("MainWindow", "D:\\EM_infoSys.WH\\DBUpdate\\Mu\346\243\200\345\256\232\346\225\260\346\215\256\344\277\235\345\255\230\346\225\260\346\215\256\345\272\223.db", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
