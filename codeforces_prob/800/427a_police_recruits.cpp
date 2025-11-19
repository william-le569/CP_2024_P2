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
    vector<int> a(n);
    ll available_number = 0;
    ll calculated_number = 0;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        available_number += a[i];
        // else if(a[i]<0) available_number 
        if(available_number <0) {
            calculated_number++;
            available_number = 0;
        }
    }
    cout << calculated_number;
    return 0;
}