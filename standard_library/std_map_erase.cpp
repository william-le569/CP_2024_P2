#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> mp;
    mp.insert({{1,"ab"}, {2, "ba"}});
    for(auto& elem: mp) cout << elem.second << " ";
    mp.erase(1);

    for(auto& elem: mp) cout << elem.second << " ";
}