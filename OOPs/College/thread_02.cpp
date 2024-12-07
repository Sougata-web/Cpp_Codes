#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void printNumbers(int n) {
    std::lock_guard<std::mutex> lock(mtx); // Lock the mutex
    for (int i = 1; i <= n; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::thread t1(printNumbers, 10);
    std::thread t2(printNumbers, 5);

    t1.join();
    t2.join();

    return 0;
}
