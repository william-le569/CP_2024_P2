// Accepted
// method 1
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     string s;
//     cin >> s;
//     for(int i=0; i<s.size(); ++i) {
//         if(s[i] == '.') {
//             cout << 0;
//         }
//         else if (s[i] == '-')
//         {
//             if(s[i+1] == '.') {
//                 cout << 1;
//                 i++;
//             }
//             else if (s[i+1] == '-')
//             {
//                 cout << 2;
//                 i++;
//             }
            
//         }
        
//     }
//     return 0;
// }

//method 2

#include<stdio.h>
 
int main() {
    char c;
    while ((c = getchar()) - '\n')
      putchar(c=='-'? getchar()=='-'? '2':'1':'0');
}