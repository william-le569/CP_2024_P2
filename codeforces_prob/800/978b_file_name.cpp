// Online judge accepted
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     // ios::sync_with_stdio(false);
//     // cin.tie(0);
//     // your code here
//     int n;
//     cin >> n;
//     char c;
//     // int cnt = 0;
//     // int res = 0;
//     getchar();
//     int cnt = 0, res = 0;
//     while((c=getchar())!='\n' && n--) {
//         if(c=='x') cnt++;
//         else { // res duoc tinh khi -> c != 'x'. Vay truong hop c = x thi no khong duoc tinh. Boi vi dac trung la no se
//                 // tinh res, khi res !='x', nen ta loi dung ki tu '\n' de tinh truong hop chuoi~ tan cung bang 'xxx\n'
//             if(cnt>2) res += (cnt-2);
//             cnt = 0;
//         }
//     }
//     if(cnt>2) res += (cnt-2);
//     // cout << cnt << "\n";
//     cout << res;
//     return 0;
// }


// Safer way use string.
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0, res = 0;

    for (char c : s) {
        if (c == 'x') cnt++;
        else {
            if (cnt > 2) res += cnt - 2;
            cnt = 0;
        }
    }
    if (cnt > 2) res += cnt - 2;

    cout << res;
    return 0;
}


