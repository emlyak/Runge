CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

project(runge)

set(SOURCES 
    src/runge.cpp    
)

set(HEADERS 
    headers/runge.h
)

include_directories(headers)

add_library(runge SHARED ${SOURCES} ${HEADERS})