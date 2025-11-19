// Accepted
// Time complexity O(n)
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    ull n;
    cin >> n;
    vector<ll> a(n);
    vector<ull> hash(2e5 + 1, 0);
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        a[i] = a[i] + 1e5;
        if(a[i] == 1e5) hash[a[i]] = 0;
        else hash[a[i]] =1;
    }
    int res = 0;
    for(int i=0; i<hash.size(); ++i) {
        if(hash[i]) res++;
    }
    cout << res;

    return 0;
}