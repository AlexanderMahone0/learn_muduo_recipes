#include "Acceptor.h"
#include "EventLoop.h"
#include "InetAddress.h"
#include "SocketsOps.h"

#include <stdio.h>
#include <string>

void newConnection(int sockfd, const muduo::InetAddress& peerAddr)
{
  printf("newConnection(): accepted a new connection from %s\n",
         peerAddr.toHostPort().c_str());
  std::string msg;
  msg = "How do you do?\n";
  ::write(sockfd, msg.c_str(), msg.length());
  muduo::sockets::close(sockfd);
}

int main()
{
  printf("main(): pid = %d\n", getpid());

  muduo::InetAddress listenAddr(9981);
  muduo::EventLoop loop;

  muduo::Acceptor acceptor(&loop, listenAddr);
  acceptor.setNewConnectionCallback(newConnection);
  acceptor.listen();

  loop.loop();
}
