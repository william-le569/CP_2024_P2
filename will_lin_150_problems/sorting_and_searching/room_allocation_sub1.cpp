#include <bits/stdc++.h>
using namespace std;

#define ar array

int main() {
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    // ar<int, 2> r[n];
    vector<ar<int, 2>> r(n);
    int ans = -1;
    for(int i=0; i<n; ++i) {
        cin >> r[i][1] >> r[i][0];
    }
    sort(r.begin(), r.end());
    // set<ar<int, 2>> s;
    for(int i=0; i<n; ++i) {
        if(a>(int)r[i][0]) ans = i;
        // auto it = r.lower_bound(a);


    }
    cout << ++ans << endl;
    return 0;
}