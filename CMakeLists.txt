cmake_minimum_required(VERSION 3.16)
project(orgchart_a)

set(CMAKE_CXX_STANDARD 14)

add_executable(orgchart_a main.cpp sources/OrgChart.cpp sources/OrgChart.hpp)
