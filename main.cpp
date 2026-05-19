#include "FooEngine.h"
#include "FooCmdReceiver.h"
#include <iostream>

int main() {
    FooEngine engine;
    FooCmdReceiver receiver;
    const int TIME = 1000;

    std::cout << "Robot control. Commands: forward, backward, left, right, stop, exit\n";

    while (true) {
        std::string cmd = receiver.receive();

        if (cmd == "forward") engine.forward(TIME);
        else if (cmd == "backward") engine.backward(TIME);
        else if (cmd == "left") engine.left(TIME);
        else if (cmd == "right") engine.right(TIME);
        else if (cmd == "stop") engine.stop();
        else if (cmd == "exit") break;
        else std::cout << "Unknown command\n";
    }
    return 0;
}