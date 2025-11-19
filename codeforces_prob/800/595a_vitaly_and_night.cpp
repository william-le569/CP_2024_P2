// Accepted
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n, m;
//     cin >> n >> m;
//     int a[n][2 * m];
//     int res = 0;
//     for(int i=0; i<n; ++i) {
//         int sum = 0;
//         int count = 1;
//         for(int j=0; j<2*m; ++j) {
//             cin >> a[i][j];
            
//             if(j%2<=1 && count <= 2) {
//                 sum |= a[i][j];
//                 count++;
//             }
//             if(count > 2) {
//                 count = 1;
//                 if(sum == 1) { sum = 0, res ++;}
//             }

//         }
//     }
//     cout << res;
//     return 0;
// }

// Trick
// Xet 2 cap moi lan la duoc.
// Bo qua khong gian xet.
// Khai thac toi uu tinh chat. -> Khong ruom ra viec phai hinh dung khong gian.
// Hieu ro tinh chat cua \t va \n
#include "iostream"
int main(){int n,m,a=-1;while(std::cin>>n>>m)a+=n+m>0;std::cout<<a;}