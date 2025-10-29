#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n = 3;
    int x = 1;
    int array[n] = {1, 2, 3};
    auto k = lower_bound(array,array+n,x)-array;
    if (k < n && array[k] == x) {
        // x found at index k
        cout << "lower_bound:";
        cout << k << "\n";
    }
    k = upper_bound(array,array+n,x)-array;
    cout << k << "\n";
    auto a = lower_bound(array, array+n, x);
    auto b = upper_bound(array, array+n, x);
    cout << b-a << "\n";

    auto r = equal_range(array, array+n, x);
    cout << r.second-r.first << "\n";
    // int i = 3;

    // int i = 5;

    // cout << i;
    // if (k < n && array[k] == x) {
    //     // x found at index k
    //     cout << "upper_bound:";
    //     cout << k << "\n";
    // }
    return 0;
}