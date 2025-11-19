#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    ll n;
    cin >> n;
    if(n%2) {
        n = n / 2 - n;
    }
    else {
        n = n / 2;
    }
    cout << n;
    return 0;
}