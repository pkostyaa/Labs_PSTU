#include <iostream>
#include <sstream>
#include "Time.h"

using namespace std;

Time calcTime(Time t1, Time t2) {
    int minutes = t1.getMinutes() + t2.getMinutes(), tmp = 0, seconds = 0;
    if (t1.getSeconds() + t2.getSeconds() > 60) {
        tmp = (t1.getSeconds() + t2.getSeconds()) / 60;
        seconds = (t1.getSeconds() + t2.getSeconds()) % 60;
    }
    else { seconds = t1.getSeconds() + t2.getSeconds(); }
    minutes += tmp;
    return Time(minutes, seconds);
}

int main() {
    Time t1;
    Time t2(5, 35);
    cout << "First time: " << t1 << endl;
    cout << "Second time: " << t2 << endl;
    cout << t1 << " + " << t2 << " = " << calcTime(t1, t2) << endl;

    return 0;
}

