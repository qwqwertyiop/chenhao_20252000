# ============================================================
# CMakeLists.txt - C++教学示例项目构建配置
# ============================================================

cmake_minimum_required(VERSION 3.10)

project(ComplexDemo)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 针对 GCC/MinGW 编译器（你现在用的 MSYS2）
if(NOT MSVC)
    # 强制静态链接，把运行库打包进 exe，彻底解决双击/换终端运行提示找不到 DLL 报错 (0xC0000139) 的问题
    add_link_options(-static)
    
    # 强制源码按 UTF-8 读入，且编译出的字符串也按 UTF-8 输出
    # 解决在 Git Bash、PowerShell (chcp 65001) 或 VS Code 终端里的乱码问题
    add_compile_options(-finput-charset=UTF-8 -fexec-charset=UTF-8)
endif()

# MSVC (Visual Studio) 的编码设置
if(MSVC)
    add_compile_options(/source-charset:utf-8 /execution-charset:gbk)
endif()

# 1. 先创建目标
add_executable(complex_demo src/main.cpp src/Complex.cpp)

# 2. 再添加包含目录
target_include_directories(complex_demo PRIVATE include)
