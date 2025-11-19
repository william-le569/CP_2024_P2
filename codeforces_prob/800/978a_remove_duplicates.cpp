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
    int tmp;
    set<int> s;
    vector<int> hash(1001, 0);
    vector<int> a;
    for(int i=0; i<n; ++i) {
        cin >> tmp;
        a.push_back(tmp);
        s.insert(tmp);
        hash[tmp]++; // based -1
    }
    cout << s.size() << "\n";

    for(int i=0; i<a.size(); ++i) {
        if(hash[a[i]] == 1) cout << a[i] << " ";
        else if(hash[a[i]] > 1) hash[a[i]]--;

    }

    return 0;
}