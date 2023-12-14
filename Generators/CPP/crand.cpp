#include <fstream>
#include <chrono>
#include <iostream>

int main() {
    std::fstream outStream("values_cpp.csv", std::ios::out);
    outStream << 100000 << std::endl << "Seed" << ","<<"Random Number" << std::endl;

    for (int i = 0; i < 100000; i++) {
        auto currentTime = std::chrono::high_resolution_clock::now();
        auto timestamp = std::chrono::duration_cast<std::chrono::nanoseconds>(currentTime.time_since_epoch()).count();
        outStream << timestamp << ',' << rand() << std::endl;
    }

    return 0;
}
