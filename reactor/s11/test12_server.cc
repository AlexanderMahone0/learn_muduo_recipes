#include "TcpServer.h"
#include "EventLoop.h"
#include "InetAddress.h"
#include <stdio.h>
#include <string>
#include <iostream>

void onConnection(const muduo::TcpConnectionPtr& conn)
{
    if (conn->connected())
    {
        printf("onConnection(): tid=%d new connection [%s] from %s\n",
               muduo::CurrentThread::tid(),
               conn->name().c_str(),
               conn->peerAddress().toHostPort().c_str());
    }
    else
    {
        printf("onConnection(): tid=%d connection [%s] is down\n",
               muduo::CurrentThread::tid(),
               conn->name().c_str());
    }
}

void onMessage(const muduo::TcpConnectionPtr& conn,
               muduo::Buffer* buf,
               muduo::Timestamp receiveTime)
{
    printf("onMessage(): tid=%d received %zd bytes from connection [%s] at %s\n",
           muduo::CurrentThread::tid(),
           buf->readableBytes(),
           conn->name().c_str(),
           receiveTime.toFormattedString().c_str());

    char buff[32];
    snprintf(buff, 100, "%p\n", conn->getLoop());
    std::string loopAddr(buff);
    conn->send(buf->retrieveAsString() + loopAddr);
}

int main(int argc, char* argv[])
{
    printf("main(): pid = %d\n", getpid());

    muduo::InetAddress listenAddr(9981);
    muduo::EventLoop loop;

    muduo::TcpServer server(&loop, listenAddr);
    server.setConnectionCallback(onConnection);
    server.setMessageCallback(onMessage);
//  if (argc > 1) {
//    server.setThreadNum(atoi(argv[1]));
//  }
    server.setThreadNum(10);
    server.start();

    loop.loop();
}
