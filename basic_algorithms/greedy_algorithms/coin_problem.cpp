#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> coins = {25, 10, 5, 1}; // hệ thống chuẩn, giảm dần
    vector<int> coins = {200, 100, 50, 20, 10, 5, 2, 1}; // hệ thống chuẩn, giảm dần
    int n;
    cin >> n;
    int ans = 0;
    for (int c : coins) {
        ans += n / c;
        n %= c;
    }
    cout << ans << "\n";
}