cmake_minimum_required(VERSION 3.16)
project(orgchart_a)

set(CMAKE_CXX_STANDARD 14)

add_executable(orgchart_a main.cpp  sources/Node.cpp sources/Node.hpp sources/OrgChart.cpp sources/OrgChart.hpp sources/Iterator.cpp)


# Demo.cpp  Test.cpp