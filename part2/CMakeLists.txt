cmake_minimum_required(VERSION 3.10)
project(PointTriangle)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tell the compiler where to find header files
include_directories(include)

# List all .cpp source files
add_executable(${PROJECT_NAME}
    src/main.cpp
    src/point.cpp
    src/triangle.cpp
)
