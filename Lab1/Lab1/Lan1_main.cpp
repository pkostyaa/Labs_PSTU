#include <iostream>  

using namespace std;

class MakeInteger {
    int first, second;

public:
    MakeInteger() {
        first = 10;
        second = 2;
    }
    MakeInteger(int firstVal, int secondVal) {
        first = firstVal;
        second = secondVal;
    }
    int getFirst() {
        return first;
    }
    int getSecond() {
        return second;
    }
    int ipart() {
        if (second != 0) return first / second;
        else return -1;
    }
};

MakeInteger makeMyInteger(int first, int second) {
    MakeInteger mk(first, second);
    return mk;
}

int main() {
    MakeInteger mk(10, 0);
    MakeInteger* mk2 = new MakeInteger(1, 3);
    MakeInteger arr[10];
    arr[1] = makeMyInteger(25, 5);

    cout << mk.getFirst() << '/' << mk.getSecond() << " = " << mk.ipart() << endl;
    cout << mk2->getFirst() << '/' << mk2->getSecond() << " = " << mk2->ipart() << endl;
    cout << arr[1].getFirst() << '/' << arr[1].getSecond() << " = " << arr[1].ipart() << endl;
    return 0;
}
