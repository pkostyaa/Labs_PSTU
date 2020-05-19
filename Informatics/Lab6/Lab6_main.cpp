#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
    Vector a(6); 
    cout << "Vector a\n" << a << endl;
    cin >> a; 
    cout << "Vector a\n" << a << endl;
    a[2] = 54;    
    cout << "Vector a, a[2]=54\n" << a << endl;

    Vector b(8); 
    cout << "Vector b\n" << b << endl;
    b = a; 
    cout << "Vector b=a\n" << b << endl;

    Vector c(8); c = b + 666;
    cout << "Vector c\n" << c << endl;

    cout << "\nThe length of a=" << a() << endl;
    cout << "\nFirst element Vector a=" << *(a.first()) << endl;

    cout << endl;
    Iterator i = a.first();
    for (i = a.first(); i != a.last(); i++) 
        cout << *i << " ";

    return 0;
}

