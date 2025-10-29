#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // cout << -3 % 2;
    int r;
    r = a % b;
    if(r < 0) {
        r += b;
        cout << r;
    }
    return 0;
}

