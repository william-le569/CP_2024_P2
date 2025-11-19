// Time complexity n -> time exceeding.
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n;
//     cin >> n;
//     int res = 0;
//     for(int i=1 ; i<=n/2; ++i) {
//         if(n/i>1) res++;
//     }
//     cout << res + 1; // +1 case that all elements are 1.
//     return 0;
// }

// Time complexity square n.

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    long long n;
    cin >> n;
    long long res = 0;

    long long i = 1;
    while (i <= n / 2) {
        long long val = n / i;           // giá trị hiện tại, tim gia tri, ma khi lay n / i thi no giong nhau.
                                        // This is like finding the block-id. 
        if (val <= 1) break;

        long long next_i = n / val + 1;  // i tiếp theo mà val sẽ thay đổi, canh tren cua doan.
        res += next_i - i; // Tai sao? -> Tinh so luong phan tu theo doan, canh tren - canh duoi.
                            // res quan li do dai cua block.

        i = next_i; // i khong tang theo tuyen tinh.
    }

    cout << res + 1; // +1 cho trường hợp tất cả là 1
    return 0;
}