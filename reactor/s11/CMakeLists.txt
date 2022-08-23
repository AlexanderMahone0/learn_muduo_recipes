set(base_srcs
        Acceptor.cc
        Buffer.cc
        Channel.cc
        Connector.cc
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

add_executable(test12 ${base_srcs} test12.cc)
target_link_libraries(test12 muduo_base)

add_executable(test12_server ${base_srcs} test12_server.cc)
target_link_libraries(test12_server muduo_base)

