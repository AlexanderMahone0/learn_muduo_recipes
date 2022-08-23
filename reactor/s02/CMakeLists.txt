set(base_srcs
        Channel.cc
        EventLoop.cc
        Poller.cc
        Timer.cc
        TimerQueue.cc
        )

add_executable(test4 ${base_srcs} test4.cc)
target_link_libraries(test4 muduo_base)

add_executable(test4_1 ${base_srcs} test4_1.cc)
target_link_libraries(test4_1 muduo_base)

