// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    vector<int> a(4);
    for(int i=0; i<4; ++i) cin >> a[i];
    string s;
    cin >> s;
    int res = 0;
    for(int i=0; i<s.size(); ++i) {
        res += a[s[i]-'1'];
    }
    cout << res;
    return 0;
}