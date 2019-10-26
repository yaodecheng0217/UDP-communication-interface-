/*
 * @Description: In User Settings Edit
 * @Author: Yaodecheng
 * @Date: 2019-10-13 14:02:01
 * @LastEditTime: 2019-10-21 22:11:39
 * @LastEditors: Please set LastEditors
 */
/*

 // udp信息处理函数每收到一帧信息创建一个线程去处理

void *DataProcess(std::vector<uint8_t> databuffer,void * context)
{
	return 0;
}

int main()
{
	UdpMessage udptest;
	udptest.init(6666, DataProcess, NULL);
	udptest.messagsend("127.0.0.1", 7777, "123");
	while(1);
}

*/

#ifndef __UDPMESSAGE__
#define __UDPMESSAGE__
#ifdef _WIN32
#include <WinSock2.h>
#include <Windows.h>
#pragma comment(lib, "ws2_32.lib")
#else
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#endif

#include <stdio.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include "mutexlock.hpp"
#include <iostream>

template <typename T>
T bytes2T(unsigned char *bytes)
{
	T res = 0;
	int n = sizeof(T);
	memcpy(&res, bytes, n);
	return res;
}

template <typename T>
unsigned char *T2bytes(T u)
{
	int n = sizeof(T);
	unsigned char *b = new unsigned char[n];
	memcpy(b, &u, n);
	return b;
}
class UdpMessage
{
public:
	typedef void *(*Fun)(std::vector<uint8_t>,void *);

	UdpMessage();
	int init(int cliceport, Fun callback, void *);
	~UdpMessage();
	void messagsend(const char *ip, int port, const char *data, int L);
	void messagsend(const char *ip, int port, const std::string data);

private:
#ifdef _WIN32
	static DWORD WINAPI Recv_thread(void *prt);
	static DWORD WINAPI UDPrevthreadfun(void *);
#else
	pthread_t recvThread;
	static void *UDPrevthreadfun(void *);
	static void *Recv_thread(void *);
#endif

	void recvudpfun();
	void *_context;
	int port;
	int sock_fd;
	struct sockaddr_in addr;
	int n = 0;
	MutexLock sendcs;
	bool massagready = false;
	Fun callbackFun;

	char recv_buf[2000];
	int recvL = 0;
};
#endif