#include <iostream>
#include <thread>

using std::cout;
using std::endl;
using std::thread;


int main (){
    thread th {[](){
            cout << "Second thread." << endl;
    }};
    cout << "First thread." << endl;
    th.join();
    cout << "End." << endl;
    return 0;
}
