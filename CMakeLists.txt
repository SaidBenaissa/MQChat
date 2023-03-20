cmake_minimum_required(VERSION 3.5)

project(my_zeroMQ_project)

find_package(cppzmq REQUIRED)

add_executable(my_zeroMQ_project
        publisher.cpp
        subscriber.cpp
        main.cpp
        )

target_link_libraries(my_zeroMQ_project PRIVATE cppzmq)
