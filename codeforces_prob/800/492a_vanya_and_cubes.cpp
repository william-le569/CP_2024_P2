// // Accepted

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n;
//     cin >> n;
//     int count = 0;
//     int sum = 0;
//     for(int i=1;; ++i) {
//         if(2*n - sum <0) break;
//         else {
//             sum += (i * (i+1));
//             ++count;
//         }
//     }
//     cout << count-1;
//     return 0;
// }

// method 2
// better solution

#include<iostream>
using namespace std;
int i=1,n;
int main()
{
    for(cin>>n;i*(i+1)*(i+2)<=6*n;++i);
    return cout<<i-1,0;
}