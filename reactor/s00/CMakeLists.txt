add_executable(test1 EventLoop.cc test1.cc)
target_link_libraries(test1 muduo_base)

add_executable(test2 EventLoop.cc test2.cc)
target_link_libraries(test2 muduo_base)
