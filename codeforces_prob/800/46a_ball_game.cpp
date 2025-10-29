// method 1
// accepted
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n;
//     cin >> n;
//     int sum = 1;
//     int res;
//     for(int i=1; i<n; ++i) {
//         sum +=i;
//         res = sum % n;
//         cout << (res == 0 ? n : res) << " ";
//     }
//     return 0;
// }

// method 1 - improved
// accepted

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n;
//     cin >> n;
//     int sum = 1;
//     int res;
//     for(int i=1; i<n; ++i) {
//         sum +=i;
//         res = (sum - 1) % n + 1;
//         // cout << (res == 0 ? n : res) << " ";
//         cout << res << " ";
//     }
//     return 0;
// }

// method 2
// accepted

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n;
//     cin >> n;
//     int res;
//     for(int i=1; i<n; ++i) {
//         res = (i*(i+1)/2)%n + 1;
//         cout << res << " ";
//     }

//     return 0;
// }