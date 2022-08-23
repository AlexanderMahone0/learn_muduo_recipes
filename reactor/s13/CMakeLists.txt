set(base_srcs
        Acceptor.cc
        Buffer.cc
        Channel.cc
        Connector.cc
        EPoller.cc
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

add_executable(test13_1 ${base_srcs} test1.cc)
target_link_libraries(test13_1 muduo_base)

add_executable(test13_2 ${base_srcs} test2.cc)
target_link_libraries(test13_2 muduo_base)

add_executable(test13_3 ${base_srcs} test3.cc)
target_link_libraries(test13_3 muduo_base)

add_executable(test13_4 ${base_srcs} test4.cc)
target_link_libraries(test13_4 muduo_base)

add_executable(test13_5 ${base_srcs} test5.cc)
target_link_libraries(test13_5 muduo_base)

add_executable(test13_6 ${base_srcs} test6.cc)
target_link_libraries(test13_6 muduo_base)

add_executable(test13_7 ${base_srcs} test7.cc)
target_link_libraries(test13_7 muduo_base)

add_executable(test13_8 ${base_srcs} test8.cc)
target_link_libraries(test13_8 muduo_base)

add_executable(test13_9 ${base_srcs} test9.cc)
target_link_libraries(test13_9 muduo_base)

add_executable(test13_10 ${base_srcs} test10.cc)
target_link_libraries(test13_10 muduo_base)

add_executable(test13_11 ${base_srcs} test11.cc)
target_link_libraries(test13_11 muduo_base)

add_executable(test13_12 ${base_srcs} test12.cc)
target_link_libraries(test13_12 muduo_base)

add_executable(test13_13 ${base_srcs} test13.cc)
target_link_libraries(test13_13 muduo_base)

