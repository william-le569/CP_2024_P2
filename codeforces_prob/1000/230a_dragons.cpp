#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    int n;
    cin >> s >> n;

    vector<pair<int,int>> dragon;

    for(int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        dragon.push_back({x, y});
    }

    sort(dragon.begin(), dragon.end());

    for(int i = 0; i < dragon.size(); ++i) {
        if(s > dragon[i].first) {
            s += dragon[i].second;
        }
        else {
            s -= dragon[i].first;
            break;
        }
    }

    if(s > 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    s = 0;
    return 0;
}