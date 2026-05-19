#pragma once
#include "ACmdReceiver.h"
#include <string>

class FooCmdReceiver : public ACmdReceiver {
public:
    std::string receive();
};