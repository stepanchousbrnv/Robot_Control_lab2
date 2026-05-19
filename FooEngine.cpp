#include "FooEngine.h"

void FooEngine::forward(int time_ms) {
    std::cout << "[FooEngine] forward " << time_ms << " ms" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(time_ms));
}

void FooEngine::backward(int time_ms) {
    std::cout << "[FooEngine] backward " << time_ms << " ms" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(time_ms));
}

void FooEngine::left(int time_ms) {
    std::cout << "[FooEngine] left " << time_ms << " ms" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(time_ms));
}

void FooEngine::right(int time_ms) {
    std::cout << "[FooEngine] right " << time_ms << " ms" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(time_ms));
}

void FooEngine::stop() {
    std::cout << "[FooEngine] stop" << std::endl;
}