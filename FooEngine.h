#pragma once
#include "AEngine.h"

class FooEngine : public AEngine {
public:
    void forward(int time_ms);
    void backward(int time_ms);
    void left(int time_ms);
    void right(int time_ms);
    void stop();
};