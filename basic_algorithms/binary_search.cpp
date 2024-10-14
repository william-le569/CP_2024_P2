#include <bits/stdc++.h>
using namespace std;

int binary_search(int A[], int size, int key) {
    int l = 0;
    int h = size - 1;
    while (l <= h) {
        int mid = l + (h-l) / 2;
        if (A[mid] == key) return mid;
        else if (key < A[mid]) {
            h = mid - 1;
        } 
        else {
            l = mid + 1;
        }
    }
    return -1;
}

int main() {

    int key;
    cin >> key;

    int size;
    cin >> size;
    
    int A[size];
    for (int i = 0; i < size; ++i) cin >> A[i];

    cout << binary_search(A, size, key);

    return 0;
}


