set(base_srcs
        Channel.cc
        EventLoop.cc
        Poller.cc
        )

add_executable(test3 ${base_srcs} test3.cc)
target_link_libraries(test3 muduo_base)
