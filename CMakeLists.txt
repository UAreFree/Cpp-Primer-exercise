﻿# CMakeList.txt: Cpp-Primer-exercise 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("Cpp-Primer-exercise")

# 将源代码添加到此项目的可执行文件。
add_executable (Cpp-Primer-exercise "ch06/ex6_56.cpp" "ch01/Sales_item.h")

# TODO: 如有需要，请添加测试并安装目标。
