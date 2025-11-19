// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x2 = abs(x2 - x1);
    y2 = abs(y2 - y1);
    int res = max(x2, y2);

    cout << res; 

    return 0;
}