

// Digital Clock

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main(){

    int hours;
    int min;
    int sec;

    cout << "Hours: ";
    cin >> hours;

    cout << "Min: ";
    cin >> min;

    cout << "Sec: ";
    cin >> sec;

    while(true){

        cout << "\r" << hours << ":" << min << ":" << sec << flush;

        sec++;

        if(sec > 59){
            min++;
            sec = 0;
        }

        if(min > 59){
            hours++;
            min = 0;
        }

        if(hours > 23){
            hours = 0;
        }

        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
