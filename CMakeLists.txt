cmake_minimum_required(VERSION 3.20)
project(CacheProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(CacheProject main.cpp Cache.cpp Cache.h Set.cpp Set.h Way.cpp Way.h)
