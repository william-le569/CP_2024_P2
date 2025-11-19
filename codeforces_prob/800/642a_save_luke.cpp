// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int d, L, v1, v2;
    cin >> d >> L >> v1 >> v2;
    double res;
    res = ((double)(L-d))/(v2+v1);
    cout << fixed << setprecision(20) << res;
    return 0;
}