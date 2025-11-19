#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
long long cnt = 0;
vector<int> column;
vector<int> diag1;
vector<int> diag2;

void search(int y) {
    if(y==n) {
        cnt++;
        return;
    }
    for(int x=0; x<n; ++x) {
        if(column[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1);
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    // int n;
    cin >> n;
    column.assign(n, 0);
    diag1.assign(2 * n, 0);
    diag2.assign(2 * n, 0);
    search(0);
    cout << cnt;
    return 0;
}