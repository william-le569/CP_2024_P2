// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    string s;
    cin >> n;
    cin >> s;
    vector<bool> check_pair(n, false);
    int res = 0;
    for(int i=1; i<s.size(); ++i) {
        if(s[i]!=s[i-1] && !check_pair[i-1]) check_pair[i] = true, res++;
    }
    cout << s.size() - res;
    return 0;
}