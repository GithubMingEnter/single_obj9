cmake_minimum_required(VERSION 3.0)

project(single_demo)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE "Debug")

add_executable(1single_class 
1single_class/main.cc
1single_class/single.cc
)



add_executable(2single_class_static

2single_class_static/main.cc
2single_class_static/single.cc
)

target_link_libraries(2single_class_static pthread)


add_executable(3single_class_static

3single_class_static/main.cc
3single_class_static/single.cc
)

target_link_libraries(3single_class_static pthread)

# **************4*************
# 不能够成功运行
# add_executable(4single_class_thread
# 4single_class_thread/main.cc
# 4single_class_thread/single.cc
# )

# 能够成功运行
add_executable(4single_class_thread


4single_class_thread/single.cc
4single_class_thread/main.cc
)

# 不能够成功运行
# add_executable(4single_class_thread_point


# 4single_class_thread_point/main.cc
# 4single_class_thread_point/single.cc
# )

add_executable(4single_class_thread_point
4single_class_thread_point/single.cc
4single_class_thread_point/main.cc

)



add_executable(5single_class_sub_order
5single_class_sub_order/main.cc
5single_class_sub_order/single.cc

)
add_executable(5_1single_class_my_ptr
5_1single_class_my_ptr/main.cc
5_1single_class_my_ptr/single.cc

)


add_executable(6single_class_init 

6single_class_init/main.cc
6single_class_init/single.cc
)





add_executable(7single_class_thread_safe 

7single_class_thread_safe/main.cc
7single_class_thread_safe/single.cc
)

add_executable(8_1single_class_thread_reference 
8_1single_class_thread_reference/main.cc
8_1single_class_thread_reference/single.cc
)




add_executable(8single_class_thread_placement_new 
8single_class_thread_placement_new/main.cc
8single_class_thread_placement_new/single.cc
)


add_executable(9single_whole 
9single_whole/main.cc
9single_whole/src.cc
)
