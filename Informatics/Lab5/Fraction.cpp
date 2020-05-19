#include "Fraction.h"

istream& operator>>(istream& in, Fraction& f) {
    cout << "intHalf: "; in >> f.intHalf;
    cout << "floatHalf: "; in >> f.floatHalf;
    return in;
}
ostream& operator<<(ostream& out, const Fraction& f) {
    return (out << f.intHalf << "." << f.floatHalf);
}