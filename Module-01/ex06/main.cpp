#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) {
    Harl harl;

    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }

    std::string level = argv[1];
    harl.complain(level);

    return 0;
}
