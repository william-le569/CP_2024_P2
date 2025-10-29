#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Advanced code of GPT -> Don't care 

// template <typename... Args>
// void printTuple(const tuple<Args...>& t) {
//     cout << "Tuple size: " << sizeof...(Args) << "\n";
// }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<tuple<int, int, int>> v;
    v.push_back({1, 2, 3});
    v.push_back({1, 2, 2});
    v.push_back({1, 2, 1});

    sort(v.begin(), v.end());
    for (const auto& tup : v) {
        cout 
        << get<0>(tup) << " "
        << get<1>(tup) << " "
        << get<2>(tup) << " ";
        // printTuple(tup);
    }

    return 0;
}