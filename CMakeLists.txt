CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

project(runge
        LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES 
    src/runge.cpp    
)

set(HEADERS 
    headers/runge.h
    headers/dllexport.h
)

include_directories(headers)

add_compile_definitions(RUNGE_EXPORTS)

add_library(${CMAKE_PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})