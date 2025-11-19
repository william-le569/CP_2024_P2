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
    int alphabet[26]= {0};
    if(n < 26) {
        cout << "NO";
        return 0;
    }
    else {
        for(int i=0; i<s.size(); ++i) {
            // cout << s[0];
            if(s[i]>90) {
                s[i] = s[i] - ('a' - 'A');
                // cout << s[i];
            }
            alphabet[s[i] - 'A'] = 1;
        }
    }
    for(int i=0; i<26; i++) {
        if(alphabet[i] == 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}