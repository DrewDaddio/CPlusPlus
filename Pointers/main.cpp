#include <iostream>

using namespace std;

int main() {
    double a[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double *p; //&a[0] = a; p is a pointer; the pointer needs to be the same type as what it's pointing to.

    p = &a[0];

    cout << "*p = " << *p << " " << endl;

    /*unoptimized
    for(int i=0; i<7; i++) {
        p--;
        cout << *p << " ";
    }*/

    for(int i=0; i<7; i++)
        cout << *p++ << " "; //Shows that iteration can occur while being printed out

    cout << endl << "*p = " << *p << " ";

    cout << endl << " ";
    cout << endl << "Pointing to different objects" << endl;

    double x = 3.14;
    double y = 2.71;
    double *z = &x;

    cout << "This is z for x = " << *z << endl;
    z = &y;
    cout << "This is z for y = " << *z << endl;

    int j = 7;
    int k = 8;
    double h = 6.21;
    int *z1 = &j;
    int *z2 = &k;
    double *z3 = &h;

    z1 = z2;

    cout << "z1 value = " << *z1 << endl;

    *z1 = *z3;
    cout << "Pointer conversion: z1 = " << *z1 << endl;
    cout << " " << endl;

    cout << "De-referencing" << endl;
    int *r;
    int s = 22;
    r = &s;

    cout << "s = " << s << endl;
    cout << "*r is pointing to s. *r = " << *r << endl;
    cout << "r is pointing to s. r = " << r << endl;

    cout << " " << endl;
    *r = 100;
    cout << "Let's see the new r pointer reference: " << endl;
    cout << "*r is now = " << *r << endl;
    cout << "r is now = " << r << endl;

    return 0;
}
