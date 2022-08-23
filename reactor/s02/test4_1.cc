// copied from muduo/net/tests/TimerQueue_unittest.cc

#include "EventLoop.h"
#include "../../base/Thread.h"

#include <boost/bind.hpp>

#include <stdio.h>

int cnt = 0;
muduo::EventLoop* g_loop;

void print(const char* msg)
{
    printf("msg %s %s\n", muduo::Timestamp::now().toString().c_str(), msg);
//  if (++cnt == 20)
//  {
//    g_loop->quit();
//  }
    g_loop->quit();
}

void threadFunc()
{
    muduo::EventLoop loop2;

    g_loop->runAfter(1, boost::bind(print, "once1"));

//    loop2.runAfter(1, boost::bind(print, "once2"));
    loop2.loop();
}

int main()
{
//    printTid();
    muduo::EventLoop loop;
    g_loop = &loop;

    print("main");

    muduo::Thread th(threadFunc);
    th.start();

//    g_loop->runAfter(1, boost::bind(print, "once1"));

    loop.loop();
    print("main loop exits");
    sleep(1);
}
