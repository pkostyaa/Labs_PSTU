#include <iostream>
#include <sstream>

using namespace std;

class Time {
    int minutes, seconds;

public:
    Time() {
        minutes = 10;
        seconds = 31;
    }
    Time(int minutes, int seconds) {
        this->minutes = minutes;
        this->seconds = seconds;
    }
    Time(const Time& s) {
        this->minutes = s.minutes;
        this->seconds = s.seconds;
    }
    void setMinutes(int minutes) { this->minutes = minutes; }
    void setSeconds(int seconds) { this->seconds = seconds; }
    int getMinutes() { return this->minutes; }
    int getSeconds() { return this->seconds; }

    Time& operator = (const Time&);
    friend istream& operator>>(istream& in, Time& t);
    friend ostream& operator<<(ostream& out, const Time& t);

    ~Time() {}
};