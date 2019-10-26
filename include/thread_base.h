/*
 * @Descripttion: 
 * @version: 
 * @Author: Yaodecheng
 * @Date: 2019-10-19 10:32:13
 * @LastEditors: Yaodecheng
 * @LastEditTime: 2019-10-19 11:41:33
 */
#ifndef THREAD_BASE_H
#define THREAD_BASE_H

#ifdef _WIN32
#include <Windows.h>
#else
#include <pthread.h>
#endif
#include <stdio.h>
#include <sys/types.h>

class thread_base
{
	typedef void *(*RunFun)(void *);

private:
#ifdef _WIN32
	static DWORD WINAPI threadfun(void *);
#else
	pthread_t recvThread;
	static void *threadfun(void *);
#endif
	RunFun _fun;
	void *_context;

public:
	thread_base(RunFun, void *);
	~thread_base();
};

#endif