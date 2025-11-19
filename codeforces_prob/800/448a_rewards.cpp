#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    vector<int> a(3), b(3);
    int count_cups = 0, count_medals = 0;
    double needed_shelves = 0;
    for(int i=0; i<3; ++i) {
        cin >> a[i];
        count_cups += a[i];
    }
    for(int i=0; i<3; ++i) {
        cin >> b[i];
        count_medals +=b[i];
    }
    needed_shelves = ceil(((double)count_cups/5)) + ceil(((double)count_medals/10));
    int n;
    cin >> n;
    cout << needed_shelves;
    if(needed_shelves<=n) cout << "YES";
    else cout << "NO";


    return 0;
}