// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    int sum = 0;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n-1; ++i) sum += a[i];
    if(sum-s>0) cout << "NO";
    else cout << "YES";
    return 0;
}