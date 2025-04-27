// April-25-2025
// Not in william walkthrough video

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;

    while (n!=1) {
        cout << n << " ";
        if(n%2) n = n * 3 + 1;
        else n = n / 2;
    }
    cout << n;


    return 0;
}