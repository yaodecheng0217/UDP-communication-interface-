/*
 * @Descripttion: 
 * @version: 
 * @Author: Yaodecheng
 * @Date: 2019-10-19 10:26:48
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2019-10-26 18:22:14
 */

#include "ProtocolAnalysis.h"
ProtocolAnalysis::ProtocolAnalysis(OutputDataFun f)
    : _outputfun(f)
{
}

ProtocolAnalysis::~ProtocolAnalysis()
{
}

int ProtocolAnalysis::init(const int port)
{
    return UdpMessage::init(port, this);
}
struct MyStruct
{
    uint32_t x;
    float y;
};

void ProtocolAnalysis::sendData(const char *ip, int prot, FrameDataStruct sdata)
{
    uint16_t Version = 1;
    uint32_t dataLength = sdata._databuff.size();
    std::vector<uint8_t> sendbuff;

    sendbuff.resize(dataLength + 21);

    sendbuff[0] = 0x7f;
    sendbuff[1] = 0xf7;
    sendbuff[2] = (uint8_t)Version;
    sendbuff[3] = (uint8_t)(Version >> 8);

    sendbuff[4] = 0;
    sendbuff[5] = 0;
    sendbuff[6] = 0;

    sendbuff[7] = sdata.source_id;

    sendbuff[8] = sdata.cmd_id[0];
    sendbuff[9] = sdata.cmd_id[1];

    sendbuff[10] = sdata.cmd_type;

    sendbuff[11] = (uint8_t)(dataLength);
    sendbuff[12] = (uint8_t)(dataLength >> 8);
    sendbuff[13] = (uint8_t)(dataLength >> 16);
    sendbuff[14] = (uint8_t)(dataLength >> 24);

    if (dataLength > 0)
        memcpy(&sendbuff[15], &sdata._databuff[0], dataLength);

    sendbuff[16 + dataLength] = 0;
    sendbuff[17 + dataLength] = 0;
    sendbuff[18 + dataLength] = 0;

    sendbuff[19 + dataLength] = 0xf7;
    sendbuff[20 + dataLength] = 0x7f;

    messagsend(ip, prot, (char *)&sendbuff[0], dataLength + 21);
}

void ProtocolAnalysis::CallBackFuntion(std::vector<uint8_t> databuffer, void *ptr)
{
     // ProtocolAnalysis *p = (ProtocolAnalysis *)ptr;
    /*printf("\nmemdata: ");
    for (size_t i = 0; i < databuffer.size(); i++)
    {
        printf("%X ", databuffer[i]);
    }
    printf("\n");*/
    
    uint32_t bufferLength = databuffer.size();
    if (databuffer[0] == 0x7f && databuffer[1] == 0xf7 && databuffer[bufferLength - 2] == 0xf7 && databuffer[bufferLength - 1] == 0x7f)
    {
        uint16_t Version;
        memcpy(&Version, &databuffer[2], 2);
        switch (Version)
        {
        case 1:
        {
            FrameDataStruct out;
            out.source_id = databuffer[7];
            out.cmd_id[0] = databuffer[8];
            out.cmd_id[1] = databuffer[9];
            out.cmd_type = databuffer[10];

            uint32_t datalength;
            memcpy(&datalength, &databuffer[11], 4);
            out._databuff.resize(datalength);
            if (datalength > 0)
                memcpy(&out._databuff[0], &databuffer[15], datalength);
            _outputfun(out);
        }
        break;

        default:
            break;
        }
    }

    return ;
}