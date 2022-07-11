cmake_minimum_required(VERSION 3.22)

add_executable(DZ35 main.cpp task1.cpp task2.cpp task3.cpp)

target_include_directories(DZ35 PUBLIC ${CMAKE_SOURCE_DIR}/include)