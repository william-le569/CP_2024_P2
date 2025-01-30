#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    // Finding upper bound for value 30 in vector v

    vector<int>::iterator p = upper_bound(v.begin(), v.end(), 55);

    int d = p - v.begin();
    cout << &(*v.begin()) << endl;
    cout << &(*p) << endl;

    vector<int>::iterator pl = lower_bound(v.begin(), v.end(),55);

    int dl = pl - v.begin();


    // cout << &p << endl;
    // cout << &p1 << endl;
    // cout << p << endl;
    // cout << p1 << endl;
    // cout << &p-&p1 << endl;
    // cout << sizeof(vector<int>::iterator) << endl;
    // cout << &(*v.begin()) << "  " << &(*upper_bound(v.begin(), v.end(), 30)) << endl;
    // cout << &(*p) << " " << &(*p1) << endl;

    cout << "upper:" << endl;
    cout << d << endl;
    // cout << v.end() - v.begin() << endl;
    cout << *p << endl;

    cout << "lower:" << endl;
    cout << dl << endl;
    cout << &(*v.begin()) << endl;
    cout << *pl << endl;
    

    return 0;
}