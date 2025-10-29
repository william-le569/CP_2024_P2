#include <bits/stdc++.h>
using namespace std;

#define ll long long

int jump_binary_search(int array[], int size, int key) {
    int k = 0;
    for (int b = size/2; b >= 1; b /= 2) {
        while (k + b < size && array[k + b] <= key)
            k += b;
    }
    if (array[k] == key) {
        // x found at index k
        return k;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int A[4] = {1, 3, 5, 7};
    cout << jump_binary_search(A, 4, 5);
    return 0;
}