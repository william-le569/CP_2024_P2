#include <bits/stdc++.h>
using namespace std;

#define ar array

int main() {
    // ar<int, 5> ar1{{3, 4, 5, 1, 2}, {0, 0, 0, 0, 0}};
    // ar<int, 5> ar1{{3, 4, 5, 1, 2}};
    // ar<int, 5> ar1 = {1, 2, 3, 4, 5};
    ar<int, 5> ar1[3] = {{1, 2, 3, 4, 5}, {2, 2, 3, 4, 5}, {3, 2, 3, 4, 5}};

    sort(ar1, ar1+5);
    // sort(ar1.begin(), ar1.end());
    // sort(ar1[0], ar1[0]+5);
    // cout << ar1.size();
    return 0;
}