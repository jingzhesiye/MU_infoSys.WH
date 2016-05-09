#ifndef TABLETYPE_H
#define TABLETYPE_H
#include "QString"


struct MdsFuncData
{
    QString testId ;							//连接testList中的Id
    QString inteStartTime ;					//完整性开始时间
    QString inteEndTime ;					//完整性结束时间
    QString inteTestTime ;					//完整性测试时长
    QString inteLoseNum ;					//丢点数
    QString inteAllNum ;					//总点数
    QString inteResult ;						//完整性测试结论

    QString transStartTime ;					//传输延时开始时间
    QString transEndTime ;					//传输延时结束时间
    QString transTestTime ;					//传输延时测试时长
    QString transMaxDelay ;					//最大传输延时
    QString transResult ;						//传输延时测试结论
    QString spaceStartTime ;					//离散度开始时间
    QString spaceEndTime ;					//离散度结束时间
    QString spaceTestTime ;					//离散度测试时长
    QString spaceMaxDis ;						//最大离散度
    QString spaceResult ;					//离散度测试结论
    QString otherInformation;
};


struct  testList
{
    QString Id;
    QString MuId;				//连接muList中的Id
    QString sourMac;			//源Mac
    QString descMac;			//目标Mac
    QString appid;				//appid地址
    QString ANALOGRATE_V;	//模拟量电压额定值
    QString ANALOGRATE_I;	//模拟量电流额定值
    QString VOLTAGERANGE;	//数字量电压额定值
    QString CURRENTRANGE;	//数字量电流额定值
    QString SYNTYPE ;			//同步方式
    QString startTestTime;		//开始测试时间
    QString dataSaveTime;		//数据保存时间
    QString tester;				//测试员
    QString auditor;			//审核员
    QString AuditState;			//审核状态
    QString result;				//结果
    QString environment;			//环境字符
    QString protocolData;			//-9-2一帧 数据
    QString otherInformation;			//其它信息
    QString barCode; 				//条形码
    QString taskNo; 				//任务单编号
};

struct STRUCT_MT_DETECT_OUT_EQUIP  //b8
{
    QString DETECT_TASK_NO;
    QString IO_TASK_NO;
    QString EQUIP_CATEG;
    QString BAR_CODE;
    QString BOX_BAR_CODE;
    QString PILE_NO;
    QString PLATFORM_NO;
    QString SYS_NO;
    QString WRITE_DATE;
    QString HANDLE_FLAG;
    QString HANDLE_DATE;
    QString ARRIVE_BATCH_NO;
    QString REDETECT_FLAG;
    QString EMP_NO;
    QString PLATFORM_TYPE;
} ;


struct STRUCT_MT_DETECT_TASK  //b8
{
    QString BAR_CODE;
    QString DETECT_TASK_NO;
    QString TASK_PRIO;
    QString DETECT_MODE;
    QString SYS_NO;
    QString ARRIVE_BATCH_NO;
    QString EQUIP_CATEG;
    QString MODEL_CODE;
    QString SCHEMA_ID;
    QString REDETECT_SCHEMA;
    QString REDETECT_FLAG;
    QString REDETECT_QTY;
    QString EQUIP_QTY;
    QString PILE_QTY;
    QString TASK_STATUS;
    QString HANDLE_DATE;
    QString HANDLE_FLAG;
    QString WRITE_DATE;
    QString ERP_BATCH_NO;
    QString TASK_TYPE;
    QString EQUIP_STATUS_CODE;
    QString EXEC_RESP_NAME;
    QString APPR_NAME;
    QString IS_AUTO_SEAL;
    QString EQUIP_CODE_NEW;
    QString PARAM_TYPE;
} ;

struct STRUCT_CONC_CODE
{
    QString INTUIT;
    QString BASICERR;
    QString CONST;
    QString STARTING;
    QString CREEPING;
    QString INFLUENCE;
    QString MEASURE_REPEAT;
    QString DETECT_EQUIP_NO;
} ;

struct STRUCT_DOWN_INFO
{
    QString BAR_CODE;
    QString DETECT_TASK_NO;
    QString MANUFACTURER;
    QString VALUE;
} ;
#endif
