#include <bits/stdc++.h>
using namespace std;
// Test to see bahaviours of pointers.
int main() {
    int a = 3;
    int *p;
    p = &a;
    cout << "p : " << p << endl;
    cout << "&p : " << &p << endl;
    cout << "*p : " << *p << endl;


    cout << "&a : " << &a << endl;
    cout << "a : " << a << endl;
    return 0;
}