/*
 * @Descripttion: 
 * @version: 
 * @Author: Yaodecheng
 * @Date: 2019-10-09 16:20:04
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2019-10-23 14:18:49
 */

/*
 * 定义AGV中心和其他节点之间的通信数据结构
 */
#ifndef AGV_MSG_H
#define AGV_MSG_H

#include <iostream>



//-------------------------------AGV System Common-----------------------------------------------
//整个通信系统指令码列表
//AGV操作指令类型
//ISSA返回数据类型
typedef enum AGV_SYSTEM_CMD_LIST{
    NULL_DATA                         = 0x00,     //无效数据,通信测试
    AGV_REQ_ISSA_WORKING_STATUS       = 0x01,    //AGV查询ISSA工作状态
    AGV_REQ_FINISH_CURRENT_OPERATE    = 0x02,    //AGV请求结束当前操作
    AGV_REQ_GET_EXPORT_CARGO_NAV      = 0x03,    //AGV请求取出货口托盘的导航数据
    AGV_REQ_GET_EMPTY_STOCK_NAV       = 0x04,    //AGV请求取空托盘的导航数据
    AGV_REQ_PUT_EMPTY_STOCK_NAV       = 0x05,    //AGV请求放空托盘的导航数据

    ISSA_RES_DETECT_WORKING_STATUS    = 0x11,    //ISSA响应工作状态查询指令
    ISSA_RES_FINISH_CURRENT_OPERATE   = 0x12,    //ISSA响应结束当前操作指令
    ISSA_RES_GET_EXPORT_CARGO_NAV     = 0x13,
    ISSA_RES_GET_EMPTY_STOCK_NAV      = 0x14,
    ISSA_RES_PUT_EMPTY_STOCK_NAV      = 0x15,

}AGV_SYSTEM_CMD_LIST;
//消息来源节点ID
typedef enum MSG_SOURCE_ID_LIST{
   AGV     = 0xD1,              //AGV主控
   ISSA    = 0xD2,              //AGV图像处理中心
}MSG_SOURCE_ID_LIST;

//-------------------------------AGV System Common-----------------------------------------------

//-------------------------------ISSA Response Data Special----------------------------------
//访问ISSA操作结果列表
typedef enum ISSA_RET_LIST{
    ISSA_SUCCESS = 0x00,            //操作成功
    ISSA_FAIL = 0x01,               //操作失败
    ISSA_NOFOUND_OBJ = 0x02,        //未识别到目标
}ISSA_RET_LIST;

//出货口取托盘导航数据
typedef struct GetExportCargoNavData{
    uint8_t  ret;               //存储操作结果
    double x;                   //导航点　x 坐标
    double y;                   //导航点　y 坐标
    double z;                   //导航点　z 坐标
    double yaw;                 //航线角度偏差(度)
    double position_deviation;                 //航线位置偏差(mm)
}GetExportCargoNavData;

//取空托盘导航数据
typedef struct GetEmptyStockNavData{
    uint8_t  ret;               //存储操作结果
    double x;                   //导航点　x 坐标
    double y;                   //导航点　y 坐标
    double z;                   //导航点　z 坐标
    double yaw;                 //航线角度偏差(度)
    double position_deviation;                 //航线位置偏差(mm)
}GetEmptyStockNavData;

//放空托盘导航数据
typedef struct PutEmptyStockNavData{
    uint8_t  ret;               //存储操作结果
    double x;                   //导航点　x 坐标
    double y;                   //导航点　y 坐标
    double z;                   //导航点　z 坐标
    double yaw;                 //航线角度偏差(度)
    double position_deviation;                 //航线位置偏差(mm)
}PutEmptyStockNavData;
//-------------------------------ISSA Response Data Special----------------------------------








#endif
