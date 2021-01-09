cmake_minimum_required(VERSION 3.17)
project(CPP_Data)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP_Data main.cpp List/SinglyLinkedList.cpp List/SinglyLinkedList.hpp Stack/SinglyLinkedStack.cpp Stack/SinglyLinkedStack.h Queue/StackQueue.cpp Queue/StackQueue.h)