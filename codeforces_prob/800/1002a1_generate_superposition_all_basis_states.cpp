// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n;
//     cin >> n;
//     int tmp;
//     cout << "|S>=";
//     if(n%2!=0) cout << "2^(-" << n << "/2)";
//     else cout << "2^-" << n/2;
//     cout << "(";
//     for(int i=0; i<(1<<n); ++i) { // i = 1 -> 1 << 1 = 2 ( 0, 1) , i = 2 -> 1 << 2 (100) = 4 <-> 00 01 10 11
//         cout << '|';
//         for(int j=n-1; j>=0; --j) {
//             tmp = (i&(1<<j));
//             if(tmp) cout << "1";
//             else cout << "0";
//         }
//         cout << '>';
//         if(i!=(1<<n)-1) cout << "+"; 
//     }
//     cout <<")";
//     return 0;
// }

// method 2 -> use datastructure.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < (1 << n); ++i) {
        bitset<16> b(i); // tạo bitset đủ lớn, ví dụ 16 bit
        // chỉ in ra n bit thấp nhất
        for (int j = n - 1; j >= 0; --j)
            cout << b[j];
        cout << "\n";
    }

    return 0;
}