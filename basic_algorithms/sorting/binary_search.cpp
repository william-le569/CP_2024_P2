#include <bits/stdc++.h>
using namespace std;

#define ll long long

int binary_search(int A[], int size, int key) {
    int l = 0;
    int r = size - 1;
    int m;
    while(l<=r) {
        m = l + (r - l) / 2;
        if(key < A[m]) {
            // -> key belongs to left-side
            r = m;
        }
        if(key > A[m]) {
            // -> key belongs to right-side
            l = m;
        }
        if(key == A[m]) return m;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int A[4] = {1, 3, 5, 7};
    int res = binary_search(A, 4, 5);
    cout << res << " " << A[res];
    return 0;
}