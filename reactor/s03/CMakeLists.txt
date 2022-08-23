set(base_srcs
        Channel.cc
        EventLoop.cc
        EventLoopThread.cc
        Poller.cc
        Timer.cc
        TimerQueue.cc
        )

add_executable(test5 ${base_srcs} test5.cc)
target_link_libraries(test5 muduo_base)

add_executable(test6 ${base_srcs} test6.cc)
target_link_libraries(test6 muduo_base)
