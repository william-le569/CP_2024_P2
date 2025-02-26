#include <bits/stdc++.h>
using namespace std;

int main() {
    // set<int, greater<int>> s;
    set<int> s;
    s.insert(3);
    s.insert(3);
    s.insert(5);
    for(const auto& elem : s) cout << elem << " ";
    return 0;
}