// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    string s;
    cin >> s;
    int numb_large_letters = 0, numb_small_letters = 0, numb_digits = 0;
    for(int i=0; i<s.size(); ++i) {
        if('a'<=s[i] && s[i]<='z') numb_small_letters++;
        if('A'<=s[i] && s[i]<='Z') numb_large_letters++;
        if('0'<=s[i] && s[i]<='9') numb_digits++;
    }
    if(s.size() >= 5 && numb_large_letters >= 1 && numb_small_letters >= 1 && numb_digits >= 1) cout << "Correct";   // cout << numb_small_letters << " " << numb_large_letters << " " << numb_digits;
    // cout << numb_small_letters;
    else cout << "Too weak";

    return 0;
}