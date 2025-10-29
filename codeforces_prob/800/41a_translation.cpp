// method 1
// accepted
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     string s, t;
//     cin >> s >> t;
//     if(s.size() == t.size()) {
//         int count = 0;
//         for(int i=0; i<s.size(); ++i) {
//             if(s[i]==t[t.size()-1-i]) {
//                 ++count;
//                 continue;}
//             else {
//                 cout << "NO"; 
//                 break;
//             }
//         }
//         if(count == s.size()) cout << "YES";
//     }
//     else {cout << "NO";}

//     return 0;
// }

// method 2

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    string s, s1;
    cin >> s >> s1;
    s == string(s1.rbegin(), s1.rend())?cout << "YES":cout << "NO";
    return 0;
}
