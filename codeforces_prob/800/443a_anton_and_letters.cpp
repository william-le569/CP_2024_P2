// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    string a;
    getline(cin ,a);

    vector<int> hash(26, 0);
    int res = 0;
    // cout << a.size() << " ";
    for(int i=0; i<a.size(); ++i) {
        if(a[i]>='a' && a[i]<='z') {
            hash[a[i]-'a']++;
            if(hash[a[i]-'a'] == 1) res++;
        }
    }
    cout << res;
    return 0;
}