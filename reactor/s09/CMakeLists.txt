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

add_executable(test10_2 ${base_srcs} test10.cc)
target_link_libraries(test10_2 muduo_base)

add_executable(test10_3 test10_3.cc)

add_executable(test11 ${base_srcs} test11.cc)
target_link_libraries(test11 muduo_base)

