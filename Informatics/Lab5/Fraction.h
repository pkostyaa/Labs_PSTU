#pragma once

#include <iostream>
#include "Pair.h"

using namespace std;

class Fraction : public Pair {
    int intHalf, floatHalf;
public:
    Fraction(int intHalf, int floatHalf) {
        this->intHalf = intHalf;
        this->floatHalf = floatHalf;
    }
    void setIntHalf(int intHalf) { this->intHalf = intHalf; }
    void setFloatHalf(int floatHalf) { this->floatHalf = floatHalf; }
    int getIntHalf() { return this->intHalf; }
    int getFloatHalf() { return this->floatHalf; }
    friend istream& operator>>(istream& in, Fraction& p);
    friend ostream& operator<<(ostream& out, const Fraction& p);
    void Show() {
        cout << "\n" << intHalf << "." << floatHalf;
    };
};