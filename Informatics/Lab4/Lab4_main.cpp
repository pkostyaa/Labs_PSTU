#include <iostream>
#include <sstream>
#include "Pair.h"

using namespace std;

Pair comparePair(Pair p1, Pair p2) {
    if ((p1.getFirst() > p2.getFirst()) ||
        (p1.getFirst() == p2.getFirst() &&
            p1.getSecond() > p2.getSecond())) return p1;
    else return p2;
}

Fraction compareFractions(Fraction f1, Fraction f2) {
    if (f1.getFirst() > f2.getFirst()) return f1;
    else if (f1.getFirst() < f2.getFirst()) return f2;
    else if (f1.getSecond() > f2.getSecond()) return f1;
    else return f2;
}

int main() {
    Pair p1;
    Pair p2(40, 35);
    cout << "First pair: " << p1 << endl;
    cout << "Second pair: " << p2 << endl;
    Pair p3 = comparePair(p1, p2);
    cout << "More pair: " << p3 << endl;

    Fraction f1(1, 40);
    Fraction f2(1, 37);
    cout << "First fraction: " << f1 << endl;
    cout << "Second fraction: " << f2 << endl;
    cout << "More fraction: " << compareFractions(f1, f2) << endl;

    return 0;
}