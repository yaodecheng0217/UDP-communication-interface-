/*
 * @Description: In User Settings Edit
 * @Author: Yaodecheng
 * @Date: 2019-10-09 09:08:07
 * @LastEditTime: 2019-10-27 10:05:47
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
       PutEmptyStockNavData *p = (PutEmptyStockNavData *)&in._databuff[0];
        printf("PutEmptyStockNavData:\n");
        printf("id=%d\n", p->id);
        printf("x=%f\ny=%f\nz=%f\nyaw=%f\n\n", p->x, p->y, p->z, p->yaw);
        printf("ret=%d\nposition_deviation=%f\n", p->ret, p->position_deviation);
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
    miananglysis.init(9000);

    //确定数据结构和填充发送数据
    FrameDataStruct Xdata;
    Xdata.source_id = AGV;
    Xdata.cmd_id[0] = 0x00;
    Xdata.cmd_id[1] = 0x01;
    Xdata.cmd_type = NULL_DATA;

    //添加数据区到帧数据
    PutEmptyStockNavData x;
    x.id=125;
    x.yaw=1.25;
    Add_T_2_sendData(x,&Xdata);
    
    printf("s=%d\n", (int)sizeof(int *));
    while (1)
    {
        miananglysis.sendData("127.0.0.1", 9000, Xdata);
#ifdef _WIN32
        Sleep(1000);
#else
        usleep(1000 * 1000);
#endif
    }

    return 0;
}
