# UDP-communication-interface-

YADE 通用udp通讯协议接口
# 更新日志
2019-10-27
1.修改了UdpMessage接口为纯虚函数，由子类ProtocolAnalysis继承实现
2.增加了校验和函数

## 校验和计算:
### 发送方：对要数据累加，得到一个数据和，对和求反，即得到我们的校验值。然后把要发的数据和这个校验值一起发送给接收方。
### 接收方：对接收的数据（包括校验和）进行累加，然后加1，如果得到0，那么说明数据没有出现传输错误。
    （注意，此处发送方和接收方用于保存累加结果的类型一定要一致uint8_t，否则加1就无法实现溢出从而无法得到0，校验就会无效）
# 初始化
```c++
ProtocolAnalysis miananglysis(Callback_outdata);//定义ProtocolAnalysis数据分析类，传入Callback_outdata自定义解包函数
                                                //typedef void (*OutputDataFun)(FrameDataStruct data);
miananglysis.init(9000);//解析函数初始化，传入端口号
```
# 数据打包方法
```c++
   //创建发送帧
    FrameDataStruct Xdata;
    Xdata.source_id = AGV;//填写发送方id
    Xdata.cmd_id[0] = 0x00;//填写指令码1，暂时无用
    Xdata.cmd_id[1] = 0x01;//填写指令码2，暂时无用
    Xdata.cmd_type = ISSA_RES_PUT_EMPTY_STOCK_NAV;//填写数据类型，用于接收方解析

    //定义发送数据
    PutEmptyStockNavData x;
    //填充发送数据
    x.id=125;
    x.yaw=1.25;
    Add_T_2_sendData(x,&Xdata);//将结构体添加到发送帧
```
# 数据发送
```c++
miananglysis.sendData("127.0.0.1", 9000, Xdata);
```
# 数据解包方法
```c++
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
```
