#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    vector<pair<int ,int>> deadlines(n);
    for(int i=0; i<n; ++i)
        cin >> deadlines[i].first >> deadlines[i].second;
    sort(deadlines.begin(), deadlines.end());
    ll reward = 0;
    ll time = 0;
    for(int i=0; i<n; ++i) {
        time += deadlines[i].first;
        reward +=deadlines[i].second - time;
    }
    cout << reward;
    return 0;
}

// 3
// 6 10
// 5 12
// 8 15