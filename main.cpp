#include <chrono>
#include <iostream>
#include <thread>
using std::cout;
using std::endl;
using std::thread;
using namespace std::chrono_literals;

int main() {
    thread th([]() -> void {
        std::this_thread::sleep_for(1s);
        cout << "Some text." << endl;
    });
    th.join();
    cout << "End" << endl;
    return 0;
}
