#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; ++i) cin >> A[i];

    // int res[100];

    // for(int i = 0; i < 100; ++i) res[i] = -1;

    int nev_count = 0;
    int count = 0;
    int index = 0;

    vector<int> ans;

    for(int i = 0; i < n; ++i) {
        count++;
        if(A[i] < 0) {
            nev_count++;
        }
        if(nev_count == 3) {
            ans.push_back(count-1);
            count = 1;
            nev_count = 1;
        }
    
    }    

    if(count > 0) {
        ans.push_back(count);
    }
    cout << ans.size() << endl;
    index++;
    for(auto x:ans) cout << x << " ";


    return 0;
}