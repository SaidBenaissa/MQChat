#include "publisher.h"
#include "subscriber.h"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <publisher|subscriber>" << std::endl;
        return 1;
    }

    if (std::string(argv[1]) == "publisher") {
        publisher();
    } else if (std::string(argv[1]) == "subscriber") {
        subscriber();
    } else {
        std::cerr << "Unknown command: " << argv[1] << std::endl;
        return 1;
    }

    return 0;
}
