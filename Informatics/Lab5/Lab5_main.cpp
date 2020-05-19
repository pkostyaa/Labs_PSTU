#include <iostream>
#include "Fraction.h"
#include "Pair.h"
#include "Vector.h"
#include "Object.h"

using namespace std;

Fraction compareFractions(Fraction f1, Fraction f2) {
    if (f1.getIntHalf() > f2.getIntHalf()) return f1;
    else if (f1.getIntHalf() < f2.getIntHalf()) return f2;
    else if (f1.getFloatHalf() > f2.getFloatHalf()) return f1;
    else return f2;
}

int main() {

    Fraction f1(3,14);
    Fraction f2(6,28);
    cout << "First fraction: " << f1 << endl;
    cout << "Second fraction: " << f2 << endl;
    cout << "More fraction: " << compareFractions(f1, f2) << endl;

    Vector v(5);
    Fraction f3(3,14);
    Fraction f4(6,28);
    Fraction f5(9,42);
    Object* p = &f3;
    v.Add(p);
    v.Add(&f4);
    v.Add(&f5);
    cout << "Vector: " << v;
    return 0;
}



