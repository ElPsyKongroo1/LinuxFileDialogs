cmake_minimum_required(VERSION 3.28)
project(LinuxFileDialogs)

# Use the package PkgConfig to detect GTK+ headers/library files
FIND_PACKAGE(PkgConfig REQUIRED)
pkg_check_modules (GTK4 REQUIRED gtk4)

# Setup CMake to use GTK+, tell the compiler where to look for headers
# and to the linker where to look for libraries
INCLUDE_DIRECTORIES(${GTK4_INCLUDE_DIRS})
LINK_DIRECTORIES(${GTK4_LIBRARY_DIRS})

# Add other flags to the compiler
ADD_DEFINITIONS(${GTK4_CFLAGS_OTHER})

add_executable(${PROJECT_NAME} ./src/main.cpp)
target_link_libraries(${PROJECT_NAME} ${GTK4_LIBRARIES})