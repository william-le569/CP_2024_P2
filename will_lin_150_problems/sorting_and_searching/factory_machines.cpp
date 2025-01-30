#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN = 2e5;
int n, t, a[mxN];

int main() {
    cin >> n >> t;
    for(int i=0; i<n; ++i) {
        cin >> a[i]; //a[i] : time to complete a product -> s/p
    }
    ll lb=1, rb=1e18;
    while(lb<rb) {
        ll mb=(lb+rb)/2, s=0;
        for(int i=0; i<n; ++i) {
            s+=min(mb/a[i], (ll)1e9); // make sure that doesn't exceed numerical limits. 
                                    // unit of s : p -> mb (time) worst case : to create 10^9 products
                                    // speed of machine 10^9 s/p 0> max 10^18 (s)
            cout << lb << " " << rb << " " << mb << " " << s << endl;
        }
        if(s>=t)
            rb=mb;
        else
            lb=mb+1;
    }
    cout << lb;
    return 0;
}

//3 7
//3 2 5