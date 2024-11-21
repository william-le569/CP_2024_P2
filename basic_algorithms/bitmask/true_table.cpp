// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int i=0; i<1<<n; ++i) {
//         vector<int> ar;
//         for(int j=0; j<n; ++j) {
//             ar.push_back(i>>j&1);
//         }
//         for(int j=ar.size()-1; j>=0; j--) {
//             cout << ar[j] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < (1 << n); ++i) {
        for (int j = n - 1; j >= 0; --j) { // Duyệt trực tiếp từ bit cao nhất
            cout << ((i >> j) & 1) << " ";
        }
        cout << "\n";
    }
    return 0;
}