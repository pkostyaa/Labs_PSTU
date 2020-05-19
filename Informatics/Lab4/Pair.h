#include <iostream>
#include <sstream>

using namespace std;

class Pair {
    int first, second;

public:
    Pair() {
        first = 5;
        second = 36;
    }
    Pair(int first, int second) {
        this->first = first;
        this->second = second;
    }
    Pair(const Pair& p) {
        this->first = p.first;
        this->second = p.second;
    }
    void setFirst(int first) { this->first = first; }
    void setSecond(int second) { this->second = second; }
    int getFirst() { return this->first; }
    int getSecond() { return this->second; }
    Pair& operator = (const Pair&);
    friend istream& operator>>(istream& in, Pair& p);
    friend ostream& operator<<(ostream& out, const Pair& p);
    ~Pair() {}
};

class Fraction : public Pair {
    int intHalf, floatHalf;
public:
    Fraction(int intHalf, int floatHalf) {
        this->intHalf = intHalf;
        this->floatHalf = floatHalf;
    }
    int getFirst() { return this->intHalf; }
    int getSecond() { return this->floatHalf; }
    friend istream& operator>>(istream& in, Fraction& p);
    friend ostream& operator<<(ostream& out, const Fraction& p);
};