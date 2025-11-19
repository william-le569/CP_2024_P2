#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    int res = 0;
    for (int i = 0; i < n; ++i) {
        int a = s1[i] - '0';
        int b = s2[i] - '0';
        int tmp1 = abs(a - b);
        int tmp2 = abs(10 - tmp1);
        res += min(tmp1, tmp2);
    }
    cout << res;
    return 0;
}


// Classic bug

// #include <bits/stdc++.h>
// using namespace std;
 
// #define ll long long
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n;
//     cin >> n;
//     int a[n], b[n];
//     char c;
//     for(int i=0; i<n; ++i) {
//         c = getchar();
//         a[i] = c - '0';
//     }
//     getchar();
//     for(int i=0; i<n; ++i) {
//         c = getchar();
//         b[i] = c - '0';
//     }
//     int tmp1, tmp2;
//     int res = 0;
//     for(int i=0; i<n; ++i) {
//         tmp1 = abs(a[i] - b[i]);
//         tmp2 = abs(10 - tmp1);
//         res += min(tmp1, tmp2);
//     }
//     cout << res;
//     return 0;
// }

// -> online judge returns result 0 at first test. 5 82195 64723 -> reason is OS' difference.
