// Time exceeded.
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ull unsigned long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     ll n, k;
//     ll x, a, b, c;
//     cin >> n >> k >> x >> a >> b >> c;
//     vector<ll> ar(n);
//     ar[0] = x;
//     for(int i=1; i<n; ++i) {
//         ar[i] = (a * ar[i-1] + b) % c;
//     }
//     deque<ll> dq;
//     ll res  = 0;
//     for(int i=0; i<n; ++i) {
//         while(!dq.empty() && dq.front() < i-k+1) { // dq chua chi so cua window dang xet. 
//             dq.pop_front();
//         }
//         dq.push_back(i);
//         // Boi vi i, canh phai luon ton tai. -> dieu kien canh trai i-k+1 ton tai la dc.
//         ull sum = 0;
//         if(i-k+1>=0) {
//             for(auto& tmp:dq) {
//                 sum += ar[tmp];
//             }
//             res ^= sum;
//         }

//     }
//     cout << res;
//     return 0;
// }

// Try O(n)

// solution of codeactive

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ull n, k, x, a, b, c;
    cin >> n >> k;
    cin >> x >> a >> b >> c;

    vector<ull> buf(k);
    ull sum = 0;

    // Initialize buffer and initial sum
    for (ull i = 0; i < k; i++) {
        buf[i] = x;
        sum += x;
        x = (x * a + b) % c;
    }

    ull ans = sum;

    // Slide window over remaining elements
    for (ull i = k; i < n; i++) {
        ull idx = i % k;
        sum = sum - buf[idx] + x;
        buf[idx] = x;
        ans ^= sum;
        x = (x * a + b) % c;
    }

    cout << ans << "\n";
    return 0;
}