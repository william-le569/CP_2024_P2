#include<bits/stdc++.h>
using namespace std;
//**** */
int main() {
    int n;
    cin >> n;
    int a[n];

    for(int i = 0;i < n; ++i) cin >> a[i];

    int res[n-1];
    int b[n-1][n];
    for(int i = 0; i < n-1; ++i) res[i] = 0;

    for(int i = 0; i < n-1; ++i) {
        // for(int j = 0; j <= log2(n - i - 1); ++j) {
        // res[i]++;
        // if((a[i] - 1) == 0)
        // }
        while(a[i] != 0) {
            a[i]--;
            res[i]++;
            for(int j = 0; j <= log2(n-(i+1)); ++j) {
                a[j]++;
            }
        }

    }

    return 0;
}