#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector(int s, int k) {
    size = s;
    data = new int[size];
    beg.elem = &data[0];
    end.elem = &data[size];
    for (int i = 0; i < size; i++) data[i] = k;
};
Vector::Vector(const Vector& a) {
    beg = a.beg;
    end = a.end;
    size = a.size;
    data = new int[size];
    for (int i = 0; i < size; i++) data[i] = a.data[i];
};
Vector::~Vector() {
    delete[]data;
    data = 0;
};
Vector& Vector::operator=(const Vector& a) {
    if (this == &a) return *this;
    size = a.size;
    if (data != 0) delete[]data;
    data = new int[size];
    for (int i = 0; i < size; i++) data[i] = a.data[i];
    beg = a.beg;
    end = a.end;
    return *this;
};
int& Vector::operator[](int index) {
    try {
        return data[index];
    }
    catch (...) {
        cout << "\nError! Index>size";
        int i = -1;
        return i;
    }
};
Vector Vector::operator+(const int k) {
    Vector temp(size);
    for (int i = 0; i < size; ++i) temp.data[i] += data[i] + k;
    return temp;
}
int Vector::operator ()() { return size; }
ostream& operator<<(ostream& out, const Vector& a) {
    for (int i = 0; i < a.size; ++i) out << a.data[i] << " ";
    return out;
}
istream& operator>>(istream& in, Vector& a) {
    for (int i = 0; i < a.size; ++i) in >> a.data[i];
    return in;
}