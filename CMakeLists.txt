cmake_minimum_required(VERSION 3.20)
project(MyTemplateProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Executable mit allen cpp-Dateien in src/
file(GLOB SOURCES src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

# Include-Verzeichnis hinzufügen
target_include_directories(${PROJECT_NAME} PRIVATE include)
