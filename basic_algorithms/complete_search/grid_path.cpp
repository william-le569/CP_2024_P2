#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
long long cnt = 0;

void search(int x, int y) {
    if (x == n-1 && y == n-1) { // đã tới đích
        cnt++;
        return;
    }
    if (x + 1 < n) search(x + 1, y); // đi xuống
    if (y + 1 < n) search(x, y + 1); // đi phải
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    search(0, 0);
    cout << cnt;
}