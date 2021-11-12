cmake_minimum_required(VERSION 3.21)
project(xege_template) # 项目名，可以是任意的
# 下面两行用来启动 Conan，不要动
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake) 
conan_basic_setup()

add_executable(main main.cpp) # 最终生成的可执行文件名，以及源代码文件名
target_link_libraries(main ${CONAN_LIBS}) # 链接 Conan 包，不要动
