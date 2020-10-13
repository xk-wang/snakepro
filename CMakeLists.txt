# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project (snake)

set(CMAKE_CXX_STANDARD 11)

# 设置源码根路径，即 cpp 目录
aux_source_directory(./src/ DIR_SRCS)

# 设置头文件位置
include_directories(${CMAKE_CURRENT_LIST_DIR}/include/)

# 编译成可执行文件，如果编译动态库可以用：target_link_libraries
add_executable(snake ${DIR_SRCS})