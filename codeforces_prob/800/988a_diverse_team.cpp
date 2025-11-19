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
    vector<pair<int,int>> hash(101, pair<int, int>{0, -1}); // 1-based tu 0 -> 100
    int res = 0;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        hash[a[i]].first += 1;
        if(hash[a[i]].first==1) {
            hash[a[i]].second = i;
            res++;
        }
       
    }
    if((res-k)>=0) {
        cout << "YES\n";
        int tmp = 0;
        for(int i=0; i<hash.size(); ++i) { // 1-based
            if(hash[i].first && tmp<k ) {
                cout << hash[i].second + 1 << " ";
                tmp++;
            }
        }
    }
    else cout << "NO\n";
   
    return 0;
}