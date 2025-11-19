// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n, k;
    cin >> n >> k;
    while(k--) {
        if(n%10) n -= 1;
        else n/=10;
    }
    cout << n;
    return 0;
}