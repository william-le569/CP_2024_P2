#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n, m;
    cin >> n >> m;
    bool toggle = false;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            if(i%2==0) cout << '#';
            else {
                if(toggle == false) {
                    if(j==(m-1)) cout << '#';
                    else cout << '.';
                    // if(i==1 && j==3) cout << "hello" << i << j;
                }
                else if(toggle == true) {
                    if(j==0) cout << "#";
                    else cout << '.';
                }
            }
        }
        if(i%2!=0) toggle = !toggle;
        cout << "\n";
    }
    return 0;
}