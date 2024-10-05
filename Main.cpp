#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <iomanip>

std::mutex mtx;

void countUp() {
    for (int i = 0; i <= 20; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        std::cout << "Count Up: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void countDown() {
    for (int i = 20; i >= 0; --i) {
        std::lock_guard<std::mutex> lock(mtx);
        std::cout << "Count Down: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    std::thread t1(countUp);
    t1.join();

    std::thread t2(countDown);
    t2.join();

    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    long minutes = (duration / 1000) / 60;
    long seconds = (duration / 1000) % 60;
    long milliseconds = duration % 1000;

    std::cout << "Total time taken: "
        << std::setw(2) << std::setfill('0') << minutes << ":"
        << std::setw(2) << std::setfill('0') << seconds << ":"
        << std::setw(3) << std::setfill('0') << milliseconds
        << " (min:sec:millisec)" << std::endl;

    return 0;
}
