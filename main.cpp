/*
 * @Description: In User Settings Edit
 * @Author: Yaodecheng
 * @Date: 2019-10-09 09:08:07
 * @LastEditTime: 2019-10-26 17:03:57
 * @LastEditors: Please set LastEditors
 **/
#include "ProtocolAnalysis.h"
#include "agv_msg.h"

//正确收到数据后会调用此函数进行数据解包
void Callback_outdata(FrameDataStruct in)
{
    switch (in.cmd_type)
    {
    case NULL_DATA:
    {
        //todo
        //定义对应结构体指针
        //PutEmptyStockNavData *p = (PutEmptyStockNavData *)&in._databuff[0];
        printf("PutEmptyStockNavData:\n");
        //printf("id=%d\n", p->id);
        //printf("x=%f\ny=%f\nz=%f\nyaw=%f\n\n", p->x, p->y, p->z, p->yaw);
        //printf("ret=%d\nposition_deviation=%f\n", p->ret, p->position_deviation);
        break;
    }
    default:
        printf("error !cmd_type=%d\n", in.cmd_type);
        break;
    }
}

int main()
{
    ProtocolAnalysis miananglysis(Callback_outdata);
    miananglysis.init(5000);

    //确定数据结构和填充发送数据
    FrameDataStruct Xdata;
    Xdata.source_id = AGV;
    Xdata.cmd_id[0] = 0x00;
    Xdata.cmd_id[1] = 0x01;
    Xdata.cmd_type = NULL_DATA;

    //添加数据区到帧数据

    printf("s=%d\n", (int)sizeof(int *));
    while (1)
    {
        miananglysis.sendData("192.168.147.20", 5000, Xdata);
#ifdef _WIN32
        Sleep(1000);
#else
        usleep(1000 * 1000);
#endif
    }

    return 0;
}
