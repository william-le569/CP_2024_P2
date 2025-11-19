#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int res = INT_MAX;
    int s[4];
    s[0] = d1 + d2 + d3;
    s[1] = d1 * 2 + d2 * 2;
    s[2] = d1 * 2 + d3 * 2;
    s[3] = d2 * 2 + d3 * 2;
    for(int i=0; i<4; ++i) {
        if(s[i] < res) res = s[i];
    }
    cout << res;
    return 0;
}