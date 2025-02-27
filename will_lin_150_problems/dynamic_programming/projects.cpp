// William Lin
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 2e5;
// int n;
// ar<int, 3> a[mxN];

// int main() {
//     cin >> n;
//     for(int i=0; i<n; ++i) {
//         cin >> a[i][1] >> a[i][0] >> a[i][2];
//     }
//     sort(a, a+n);
//     set<ar<ll, 2>> dp;
//     dp.insert({0, 0});
//     ll ldp=0;
//     for(int i=0; i<n; ++i) {
//         auto it = dp.lower_bound({a[i][1]});
//         --it;
//         ldp = max(ldp, (*it)[1]+a[i][2]);
//         dp.insert({a[i][0], ldp});
//     }
//     cout << ldp;
// }

// self-exploitation

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> a[n];
//     vector<int> b[n];
//     vector<int> c[n];
//     for(int i=0; i<n; ++i) {
//         cin >> a[i] >> b[i] >> c[i];
//     }
//     return 0;
// }

// Indian

#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct project {
    int start;
    int end;
    int value;
    bool operator<(const project &other) const{
        return end < other.end;
    }
};

int main() {
    int n;
    cin >> n;
    vector<project> projects(n);
    for(int i=0; i<n; ++i) {
        cin >> projects[i].start >> projects[i].end >> projects[i].value;
    }
    sort(projects.begin(), projects.end());
    set<pair<int, ll>> ends;
    ends.insert({0, 0}); // {ending_time, reward};
    ll answer = 0;
    for(int i=0; i<n; ++i) {
        auto t = ends.lower_bound({projects[i].start, -1});
        t--;
        answer = max(answer, projects[i].value + t->second);
        cout << answer << endl;
        ends.insert({projects[i].end, answer});
        // cout << t << endl;
    }
    cout << answer;
    return 0;
}

// 4
// 2 4 4
// 3 6 6
// 6 8 2
// 5 7 3