// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {10, 20, 30, 40, 50};
//     // Finding upper bound for value 30 in vector v

//     vector<int>::iterator p = upper_bound(v.begin(), v.end(), 55);

//     int d = p - v.begin();
//     cout << &(*v.begin()) << endl;
//     cout << &(*p) << endl;

//     vector<int>::iterator pl = lower_bound(v.begin(), v.end(),55);

//     int dl = pl - v.begin();


//     // cout << &p << endl;
//     // cout << &p1 << endl;
//     // cout << p << endl;
//     // cout << p1 << endl;
//     // cout << &p-&p1 << endl;
//     // cout << sizeof(vector<int>::iterator) << endl;
//     // cout << &(*v.begin()) << "  " << &(*upper_bound(v.begin(), v.end(), 30)) << endl;
//     // cout << &(*p) << " " << &(*p1) << endl;

//     cout << "upper:" << endl;
//     cout << d << endl;
//     // cout << v.end() - v.begin() << endl;
//     cout << *p << endl;

//     cout << "lower:" << endl;
//     cout << dl << endl;
//     cout << &(*v.begin()) << endl;
//     cout << *pl << endl;
    

//     return 0;
// }

// test array of vector

#include <bits/stdc++.h>
using namespace std;

// vector<int> a[5](3);
const int n=3;
vector<vector<int>> dp(n, vector<int>(n)); // 3x3 matrix

int main() {
    dp[0] = {3, 2, 3};
    dp[1] = {2, 2, 3};
    dp[2] = {1, 2, 3};
    // sort(dp[0], dp[0]+3);
    sort(dp.begin(), dp.end());
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}