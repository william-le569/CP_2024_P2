// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;
    int res = 0;
    int a;
    vector<int> ar = {1, 5, 10, 20, 100};
    for(int i=ar.size()-1; i>=0; i--) {
        a = n / ar[i];
        n = n % ar[i];
        res +=a;
    }
    cout << res;
    return 0;
}