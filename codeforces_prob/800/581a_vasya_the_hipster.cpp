#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int a, b;
    cin >> a >> b;
    (a>=b)?cout << b << " " << (a-b)/2:cout << a << " " << (b-a)/2;
    return 0;
}