#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 2e5;
int n;
ll x, a[mxN];

int main() {
    cin >> n;
    ll s = 0;
    map<ll, int> mp;
    mp[0]++;
    ll ans=0;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        s=(s+a[i]%n+n)%n; // plus n to make sure that value positive.
        ans+=mp[s];
        mp[s]++;
    }
    cout << ans;
    return 0;
}