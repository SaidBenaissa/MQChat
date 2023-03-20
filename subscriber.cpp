#include <zmq.hpp>
#include <string>
#include <iostream>
#include "subscriber.h"

void subscriber() {
    zmq::context_t context(1);
    zmq::socket_t subscriber(context, ZMQ_SUB);

    subscriber.connect("tcp://localhost:5555"); // connect to the publisher
    subscriber.setsockopt(ZMQ_SUBSCRIBE, "", 0);

    zmq::socket_t sender(context, ZMQ_PUSH); // create a new socket for sending messages
    sender.connect("tcp://localhost:5556"); // connect to the publisher's receiving socket

    while (true) {
        zmq::message_t received_message;
        subscriber.recv(&received_message);

        std::string message_string = std::string(static_cast<char*>(received_message.data()), received_message.size());
        std::cout << "Received message: " << message_string << std::endl;

        // send a message to the publisher
        zmq::message_t message_to_send(message_string.size());
        memcpy(message_to_send.data(), message_string.c_str(), message_string.size());
        sender.send(message_to_send);
    }
}
