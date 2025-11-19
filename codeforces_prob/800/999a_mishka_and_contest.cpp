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
    vector<int> a(n);
    // vector<int> hash(100, 0); // 0 based
    int left_most = 101, right_most = -1;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        if(a[i]>k) {
            left_most = min(i, left_most);
            right_most = max(i, right_most);
        }
    }
    if(right_most >= left_most)
        cout << n - (right_most - left_most + 1);
    else cout << n;
    return 0;
}