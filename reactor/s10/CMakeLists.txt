set(base_srcs
        Acceptor.cc
        Buffer.cc
        Channel.cc
        EventLoop.cc
        EventLoopThread.cc
        EventLoopThreadPool.cc
        InetAddress.cc
        Poller.cc
        Socket.cc
        SocketsOps.cc
        TcpConnection.cc
        TcpServer.cc
        Timer.cc
        TimerQueue.cc
        )

add_executable(test9_2 ${base_srcs} test9.cc)
target_link_libraries(test9_2 muduo_base)

