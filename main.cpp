/*
 * @Description: In User Settings Edit
 * @Author: Yaodecheng
 * @Date: 2019-10-09 09:08:07
 * @LastEditTime: 2019-11-26 15:07:33
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

class APP : private ProtocolAnalysis
{
public:
    APP() : ProtocolAnalysis(Callback_outdata){};
    void run()
    {
        init(9000);
    };
    void send()
    {
        //确定数据结构和填充发送数据
        FrameDataStruct Xdata;
        //填写源id
        Xdata.source_id = AGV;
        //填写数据类型
        Xdata.cmd_type = NULL_DATA;
        //添加数据区到帧数据
        PutEmptyStockNavData x;
        x.id = 125;
        x.yaw = 1.25;
        Add_T_2_sendData(x, &Xdata);
        //发送
        sendData("127.0.0.1", 9000, Xdata);
    };
};

int main()
{
    APP app;
    //开始运行
    app.run();
    while (1)
    {
        app.send();
#ifdef _WIN32
        Sleep(1000);
#else
        usleep(1000 * 1000);
#endif
    }
    return 0;
}
