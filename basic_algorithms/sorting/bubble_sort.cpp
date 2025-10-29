#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }

    for(int i=0; i<n; ++i) {
        for(int j=0; j<n-1; ++j) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }

    for(int i=0; i<n; ++i) {
        cout << a[i] << "\n";
    }

    return 0;
}