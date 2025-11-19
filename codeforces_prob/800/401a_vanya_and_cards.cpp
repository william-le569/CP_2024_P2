// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n, x;
    cin >> n >> x;
    ll sum = 0;
    ll a;
    for(int i=0; i<n; ++i) {
        cin >> a;
        sum += a;
    }
    int res = 0;
    sum = abs(sum);
    // cout << sum << " ";
    if(sum != 0) {
        vector<ll> dp(sum, 0);

        for(int i=0; i<min((ll)x, sum); ++i) {
            dp[i] = 1;
        }
        // based 0
        for(int i=x; i<sum; ++i) { 
            dp[i] = dp[x-1] + dp[i-x];
        }

        cout << dp[sum-1];

        // cout << res-1;
    }
    else cout << 0;
    return 0;
}

// Cac the bai co the trung -> nen cach giai sai.
// Bai nay co dac trung cua dynamic programming.
// Wrong with this
// 15 5
// -2 -1 2 -4 -3 4 -4 -2 -2 2 -2 -1 1 -4 -2

// method 2

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;cin>>n>>x;
    int s=0,a;
    for(int i=0;i<n;i++){cin>>a;s+=a;}
    cout<<(abs(s)+x-1)/x;
}