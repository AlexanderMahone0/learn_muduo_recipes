set(base_srcs
        Acceptor.cc
        Channel.cc
        EventLoop.cc
        EventLoopThread.cc
        InetAddress.cc
        Poller.cc
        Socket.cc
        SocketsOps.cc
        Timer.cc
        TimerQueue.cc
        )

add_executable(test7 ${base_srcs} test7.cc)
target_link_libraries(test7 muduo_base)
