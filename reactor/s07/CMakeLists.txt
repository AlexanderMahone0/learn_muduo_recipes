set(base_srcs
        Acceptor.cc
        Buffer.cc
        Channel.cc
        EventLoop.cc
        EventLoopThread.cc
        InetAddress.cc
        Poller.cc
        Socket.cc
        SocketsOps.cc
        TcpConnection.cc
        TcpServer.cc
        Timer.cc
        TimerQueue.cc
        )

add_executable(test8_s07 ${base_srcs} test8.cc)
target_link_libraries(test8_s07 muduo_base)

