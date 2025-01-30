// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 2e5;
// int n;

// int main() {
//     cin >> n;
//     vector<int> v;
//     for(int i=0; i<n; ++i) {
//         int a;
//         cin >> a;
//         int p=upper_bound(v.begin(), v.end(), a) - v.begin();
//         cout << "i:" <<  i << " a:" << a << endl;
//         cout << "p:" <<  p << endl;
//         cout << "size:" << v.size() << endl;
//         if(p<v.size())
//             v[p] = a;
//         else
//             v.push_back(a);
//         cout << "v[" << p << "]=" << a << endl;
//         cout << "elements of v:";
//         for(const auto& elem: v) cout << elem << " ";
//         cout << endl;
//         cout << endl;
//         cout << endl;
//     }
//     cout << v.size();
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN = 2e5;
int n;

int main() {
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        int p=upper_bound(v.begin(), v.end(), a) - v.begin();
        if(p<v.size()) // <=> upper_bound < v.end()
            v[p] = a;  // overwrite-directly
        else
            v.push_back(a); //push with the value exceed the range of current v.
    }
    cout << v.size();
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 2e5;
// int n;

// int main() {
//     cin >> n;
    
//     multiset<int> towers;
//     int cube = 0;
//     multiset<int>::iterator it;
//     for(int i=0; i<n; ++i) {
//         cin >> cube;
//         it = towers.upper_bound(cube);
//         if(it==towers.end())
//             towers.insert(cube); // 3
//         else {
//             towers.erase(it);
//             towers.insert(cube);
//         }

//     }
//     cout << towers.size();
//     return 0;
// }


// 5
// 3 8 2 1 5