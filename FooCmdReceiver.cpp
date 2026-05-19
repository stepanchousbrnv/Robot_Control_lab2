#include "FooCmdReceiver.h"
#include <iostream>

std::string FooCmdReceiver::receive() {
    std::string cmd;
    std::cout << "> ";
    std::getline(std::cin, cmd);
    return cmd;
}