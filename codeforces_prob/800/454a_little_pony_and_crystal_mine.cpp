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
    int mid = n/2;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            if(i!=mid) {
                if(i<mid) {
                    if(abs(j-mid)<=(i%mid)) cout << "D";
                    else cout << "*";
                }
                else if(i>mid) {
                    if(abs(j-mid)<=((mid-i%mid))%mid) cout << "D";
                    else cout << "*";
                }
             
            }
            else {
                cout << "D";
            }
        }
        cout << "\n";
    }

    return 0;
}