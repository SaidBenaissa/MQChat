cmake_minimum_required(VERSION 3.5)

project(ZeroMQChat)

find_package(cppzmq REQUIRED)

add_executable(ZeroMQChat
        publisher.cpp
        subscriber.cpp
        main.cpp
        )

target_link_libraries(ZeroMQChat PRIVATE cppzmq)

if(TARGET ZeroMQChat)
    install(TARGETS ZeroMQChat DESTINATION bin)
endif()
