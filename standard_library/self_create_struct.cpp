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
    // cin >> n;
    n = 3;
    vector<project> projects(n);
    // for(int i=0; i<n; ++i) {
    //     cin >> projects[i].start >> projects[i].end >> projects[i].value;
    // }
    projects[0] = {3, 2, 3};
    projects[1] = {2, 2, 4};
    projects[2] = {1, 2, 3};
    sort(projects.begin(), projects.end());
    for(auto it : projects) cout << it.start << " " << it.end << " " << it.value << endl;

}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN = 2e5;
int n;
ar<int, 3> a[mxN];

int main() {
    // cin >> n;
    // for(int i=0; i<n; ++i) {
    //     cin >> a[i][1] >> a[i][0] >> a[i][2];
    // }
    n = 3;
    a[0] = {1, 4, 3};
    a[1] = {1, 3, 3};
    a[2] = {1, 2, 3};
    sort(a, a+n);
    // for(auto it : a) {
    //     cout << it[0] << " " << it[1] << " " << it[2] << endl;
    // }
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}