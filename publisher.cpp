// publisher.cpp
#include <zmq.hpp>
#include <string>
#include "publisher.h"
#include <iostream>

void publisher() {
    zmq::context_t context(1);
    zmq::socket_t publisher(context, ZMQ_PUB);

    std::string address = "tcp://*:5555";
    publisher.bind(address);

    while (true) {
        std::string message;
        std::cout << "Send message: " << message;
        std::cin >> message;
        zmq::message_t zmq_message(message.size());
        memcpy(zmq_message.data(), message.c_str(), message.size());
        publisher.send(zmq_message);
    }
}
