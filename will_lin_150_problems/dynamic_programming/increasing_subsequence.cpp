#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> subsequence;
    for(int i=0; i<n; ++i) {
        int value;
        cin >> value;
        int idx = lower_bound(subsequence.begin(), subsequence.end(), value) - subsequence.begin();
    }
    return 0;
}