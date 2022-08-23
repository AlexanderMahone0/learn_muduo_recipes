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
        TcpClient.cc
        Timer.cc
        TimerQueue.cc
        )

add_executable(test13 ${base_srcs} test13.cc)
target_link_libraries(test13 muduo_base)

add_executable(test13_server ${base_srcs} test13_server.cc)
target_link_libraries(test13_server muduo_base)

