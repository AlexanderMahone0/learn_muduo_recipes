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

add_executable(test9 ${base_srcs} test9.cc)
target_link_libraries(test9 muduo_base)

add_executable(test10 ${base_srcs} test10.cc)
target_link_libraries(test10 muduo_base)

