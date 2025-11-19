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
    string s;
    cin >> s;
    // Thuat toan nay dung khi no bat dau tu so 1 dau tien.
    int cnt = 0;
    bool flag_first_one = false;
    int index_first_one = -1;
    for(int i=0; i<n; ++i) {
        if(s[i]=='0') ++cnt;
        if(s[i]=='1' && flag_first_one == false) {
            index_first_one = i; // due to 0 based, index of first one is also number of leading 0.
            flag_first_one = true;
        }
    }
    if(index_first_one != -1) {
        cout << '1';
        cnt = cnt - index_first_one;
        if (cnt>0) {
            while(cnt--) cout << '0';
        }
    }
    else cout << '0';
    return 0;
}