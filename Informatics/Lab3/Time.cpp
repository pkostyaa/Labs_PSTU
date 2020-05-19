#include <iostream>
#include <sstream>
#include "Time.h"

using namespace std;

Time& Time::operator = (const Time& t) {
    if (&t == this) return *this;
    minutes = t.minutes;
    seconds = t.seconds;
    return *this;
}
istream& operator>>(istream& in, Time& t) {
    cout << "Minutes: "; in >> t.minutes;
    cout << "Seconds: "; in >> t.seconds;
    return in;
}
ostream& operator<<(ostream& out, const Time& t) {
    if (t.seconds < 10 && t.minutes < 10) {
        return (out << 0 << t.minutes << ":" << 0 << t.seconds);
    }
    else if (t.seconds < 10) {
        return (out << t.minutes << ":" << 0 << t.seconds);
    }
    else if (t.minutes < 10) {
        return (out << 0 << t.minutes << ":" << t.seconds);
    }
    else return (out << t.minutes << ":" << t.seconds);

}