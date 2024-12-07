#include <iostream>
#include <thread>

// Function to be executed by threads
void printNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        std::cout << i << "\n";
    }
    std::cout << std::endl;
}

int main() {
    std::thread t1(printNumbers, 10); // Thread 1
    std::thread t2(printNumbers, 5);  // Thread 2

    t1.join(); // Wait for thread 1 to finish
    t2.join(); // Wait for thread 2 to finish

    return 0;
}
