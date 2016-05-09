#ifndef TABLETYPE_H
#define TABLETYPE_H
#include "QString"


struct muList
{
    QString Id ;		//
    QString bianHao ;				//编号
    QString xinHao ;				//型号
    QString changjia ;				//厂家
    QString otherInformation; 			//其它信息
};

struct  MdsTestData
{
    QString testId ;			//连接testList中的Id
    QString  chIndex ;			//通道号，从1开始计算
    QString  chMap ;		//映射(UA,UB,UC,IA,IB,IC)
    QString  point ;			//检定点
    QString  rms_B ;			//标准有效值
    QString  rms_X ;			//被检有效值
    QString  freq_B ;			//标准频率
    QString  freq_X ;			//被检频率
    QString  vError ;			//比差均值
    QString  qError ;			//角差均值
    QString  freqError;		//频差
    QString  vErrorArray ;	//多次比差，以”,”号格开
    QString  qErrorArray;  //多次角差，以”,”号格开
    QString  otherInformation ;		//其它信息
};

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


struct SampleInfo
{
    QString sampleNo;
    QString tableType;
    QString phaseType;
    QString nominalVoltage;
    QString nominalCurrent;
    QString sampleType;
    QString nominalConstant;
    QString reactiveConstant;
    QString activeLevel;
    QString reactiveLevel ;
    QString freq;
    QString inputMode;
    QString isEmulator;
    QString measurementDirection;
    QString sampleName;
    QString redSeal;
    QString producer;
    QString sampleUserName;
    QString sampleManuNo;
    QString sampleSeal;
} ;



struct STRUCT_DOWN_INFO
{
    QString BAR_CODE;
    QString DETECT_TASK_NO;
    QString MANUFACTURER;
    QString VALUE;
} ;
#endif
