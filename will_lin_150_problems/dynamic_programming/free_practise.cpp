#include <bits/stdc++.h>
using namespace std;

int binary_search(int A[], int n, int key) {
    int mid, low, height;
    low = 0;
    height = n-1;
    while(low <= height) {
        mid = (low + height)/2;
        if(A[mid] == key) return mid;
        else if(key < A[mid]) {
            height = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    // int key, n;
    // cin >> key >> n;
    // int A[n];
    // for(int i=0; i<n; ++i) {
    //     cin >> A[i];
    // }
    int A[3] = {1, 2, 3};
    int n = 3;
    int key = 3;

    cout << binary_search(A, n, key);

    return 0;
}