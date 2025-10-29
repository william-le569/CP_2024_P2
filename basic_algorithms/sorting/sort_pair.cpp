#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    vector<pair<int, int>> v;
    v.push_back({1,5});
    v.push_back({1,4});
    v.push_back({1,3});
    sort(v.begin(), v.end());

    for(const auto ele : v) {
        cout 
        << ele.first << " "
        << ele.second << " ";
    }
    return 0;
}