#include <iostream>
#include <sstream>
#include "Pair.h"

using namespace std;

Pair& Pair::operator = (const Pair& p) {
    if (&p == this) return *this;
    first = p.first;
    second = p.second;
    return *this;
}
istream& operator>>(istream& in, Pair& p) {
    cout << "First: "; in >> p.first;
    cout << "Second: "; in >> p.second;
    return in;
}
ostream& operator<<(ostream& out, const Pair& p) {
    return (out << p.first << "," << p.second);
}

istream& operator>>(istream& in, Fraction& f) {
    cout << "intHalf: "; in >> f.intHalf;
    cout << "floatHalf: "; in >> f.floatHalf;
    return in;
}
ostream& operator<<(ostream& out, const Fraction& f) {
    return (out << f.intHalf << "." << f.floatHalf);
}