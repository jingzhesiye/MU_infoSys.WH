#-------------------------------------------------
#
# Project created by QtCreator 2015-05-08T17:19:05
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       +=xml
TARGET = XL_MU_infoSys.WH
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    gsoap/stdsoap2.cpp \
    gsoap/soapC.cpp \
    update/sqlite3.c \
    down/destSql_simulate.cpp \
    gsoap/soapSGCMSwitchProjectSoapBindingProxy.cpp \
    transform/transform.cpp \
    update/get_localSqlData.cpp \
    xml/xml_fun.cpp \
    md5.cpp \
    xml/xml_server.cpp \
    xml/xml_err.cpp \
    update/xml_sample.cpp \
    update/xml_intuit.cpp \
    xml/xml_ctl.cpp \
    update/xml_rslt.cpp \
    down/MU_DETECT_TASK.cpp \
    down/MU_down_Options.cpp \
    down/MU_METER.cpp \
    down/MU_sampleInfo.cpp \
    options/MU_setArgOptions.cpp \
    update/MU_basicerrr.cpp \
    update/MU_localSql_Options.cpp \
    update/MU_update_loadLocalSql.cpp \
    update/MU_integrity.cpp \
    update/xml_transmission.cpp \
    update/xml_dispersion.cpp

HEADERS  += mainwindow.h \
    gsoap/stdsoap2.h \
    gsoap/soapStub.h \
    gsoap/soapH.h \
    update/sqlite3.h \
    gsoap/soapSGCMSwitchProjectSoapBindingProxy.h \
    tableType.h

FORMS    += mainwindow.ui

LIBS     += -lws2_32

#LIBS += -L E:/sqldrivers

RESOURCES += \
    pic/pic.qrc

OTHER_FILES += \
    PS.txt \
    B.txt \
    update.txt \
    xml.txt \
    text.txt \
    WH.SQL \
    Àı–¥.txt
