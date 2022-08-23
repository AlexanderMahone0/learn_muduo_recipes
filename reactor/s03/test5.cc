#include "EventLoop.h"
#include <stdio.h>

muduo::EventLoop* g_loop;
int g_flag = 0;

void run4()
{
  printf("run4(): pid = %d, flag = %d\n", getpid(), g_flag);
  printf("end of run4\n");
  g_loop->quit();
}

void run3()
{
  printf("start of run3\n");
  printf("run3(): pid = %d, flag = %d\n", getpid(), g_flag);
  g_loop->runAfter(2, run4);
  g_flag = 3;
  printf("end of run3\n");
}

void run2()
{
  printf("start of run2\n");
  printf("run2(): pid = %d, flag = %d\n", getpid(), g_flag);
  g_loop->queueInLoop(run3);
  printf("end of run2\n");
}

void run1()
{
  g_flag = 1;
  printf("run1(): pid = %d, flag = %d\n", getpid(), g_flag);
  printf("start of run1\n");
  g_loop->runInLoop(run2);
  printf("before g_flag=2...\n");
  g_flag = 2;
  printf("after g_flag=2...\n");
  printf("end of run1\n");
}

int main()
{
  printf("main(): pid = %d, flag = %d\n", getpid(), g_flag);

  muduo::EventLoop loop;
  g_loop = &loop;

  loop.runAfter(1, run1);
  loop.loop();
  printf("main(): pid = %d, flag = %d\n", getpid(), g_flag);
}
