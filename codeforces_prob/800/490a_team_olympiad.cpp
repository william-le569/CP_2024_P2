// Accetped
// Time complexity O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;
    int a[n];
    pair<int, vector<int>> arr_pair[3];
    for(auto& p:arr_pair) {
        p.first = {0};
        p.second.clear();
    }
    int min = INT_MAX;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        arr_pair[a[i]-1].first++;
        arr_pair[a[i]-1].second.push_back(i+1);
    }
    for(int i=0; i<3; ++i) {
        if(arr_pair[i].first<min) min = arr_pair[i].first;
    }
    cout << min << "\n";
    int tmp1;
    for(int i=0; i<min; ++i) {
        for(int j=0; j<3; ++j) {
            if(!arr_pair[j].second.empty()) {
            tmp1 = arr_pair[j].second.back();
            arr_pair[j].second.pop_back();
            cout << tmp1 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}