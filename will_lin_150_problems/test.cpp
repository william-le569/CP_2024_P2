// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     set<array<int,2>> a;
//     int n;
//     cin >> n;
//     for(int i=0; i<n; ++i) {
//         int data;
//         cin >> data;
//         a.insert({i,data});
//     }
//     // for(int i=0; i<n; ++i) {
//     //    cout << a[i][0] << a[i][1];
//     // }
//     for (auto& elem : a) {
//         elem[0] = 1;
//         cout << elem[0] << " " << elem[1] << endl; // Access elements of array<int, 2>
//     }
//     //  for (const auto* elem : a) {
//     //     cout << elem[0] << " " << elem[1] << endl; // Access elements of array<int, 2>
//     // }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<array<int, 2>> a;  // Use vector instead of set
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int data;
        cin >> data;
        a.push_back({i, data});
    }

    // Now we can modify the elements of the vector
    for (auto& elem : a) {
        elem[0] = 1; // Modify the elements
        cout << elem[0] << " " << elem[1] << endl;
    }
}