// #include <bits/stdc++.h>
// using namespace std;

// int const mxN = 2e5;

// int main() {
//     int x;
//     cin >> x;
//     int n;
//     cin >> n;
//     int p[n];
//     vector<int> a;
//     int c = 0;
//     // int max_global = 0;
//     for(int i=0; i<n; ++i) {
//         cin >> p[i];
//         a.push_back(p[i]);
//         if(c<1) {
//             a.push_back(0);
//             a.push_back(x);
//             c++;
//         }
//         sort(a.begin(), a.end());
//         int max_local = 0;
        
//         for(int i=1; i<a.size(); ++i) {
//             max_local = max(max_local, a[i]-a[i-1]);
//         }
//         cout << max_local << " ";
//     }
  
//     return 0;
// }

//---- william lin

// #include <bits/stdc++.h>
// using namespace std;

// const int mxN = 2e5;
// int x, n, p[mxN];
// map<int, int> mp;

// int main() {
//     cin >> x >> n;
//     set<int> s;
//     s.insert(0);
//     s.insert(x);
//     mp[x] = 1;
//     for(int i=0; i<n; ++i) {
//         cin >> p[i];
//         auto it=s.lower_bound(p[i]);
//         int r=*it; // value of element that is lower_bound
//         --it; // element that stands right to the left of s.lower_bound
//         int l=*it;
//         --mp[r-l];
//         if(!mp[r-l]) // mp[r-l] == 0 -> execute erasing it.
//             mp.erase(r-l);
//         s.insert(p[i]);
//         ++mp[r-p[i]];
//         ++mp[p[i]-l];
//         cout << ((--mp.end())->first) << " ";
//     }
//     return 0;
// }

// ------------
// #include <bits/stdc++.h>
// using namespace std;

// const int mxN = 2e5;
// int x, n, p[mxN];
// map<int, int> mp;

// int main() {
//     cin >> x >> n;
//     set<int> s;
//     s.insert(0);
//     s.insert(x);
//     mp[x] = 1; // mark the maximum length of map to 1
//     for(int i=0; i<n; ++i) {
//         cin >> p[i];
//         auto it=s.lower_bound(p[i]);
//         int r=*it; // value of element that is lower_bound
//         cout << "\nr:" << r << endl;
//         --it; // element that stands right to the left of s.lower_bound
//         int l=*it;
//         cout << "l:" << l << endl;
//         --mp[r-l]; // unmark the length r-l
//         cout << "mp[" << r << "-" << l << "]=" << mp[r-l] << endl;
//         if(!mp[r-l]) // mp[r-l] == 0 -> execute erasing it.
//             mp.erase(r-l);
//         s.insert(p[i]);
//         ++mp[r-p[i]]; // mark r-pi
//         ++mp[p[i]-l];  // mark pi - l

//         cout << "mp[" << r << "-p[" << i << "]]=" << mp[r-p[i]] << endl;
//         cout << "mp[p[" << i << "]-" << l << "]=" << mp[p[i]-l] << endl;

//         cout << ((--mp.end())->first) << " ";
//     }
//     return 0;
// }

// 8 3
// 3 6 2

// ---- attemp 1

// #include <bits/stdc++.h>
// using namespace std;

// int n, x;
// const int mxN = 2e5;
// int p[mxN];

// int main() {
//     cin >> x;
//     cin >> n;

//     set<int> s; // a sort data structure.
//     s.insert(0);
//     s.insert(x);

//     map<int, int> mp;
//     mp[x] = 1;
//     // mp[0] = 1;

//     for(int i=0; i<n; ++i) {
//         cin >> p[i];
//         auto it = s.lower_bound(p[i]);
//         int r = *it;
//         // s.insert(p[i]);
//         --it;
//         // s.insert(p[i]);
//         int l = *it;
//         --mp[r-l]; // first case l-r <-> mp[x]
//         if(mp[r-l]==0) 
//             mp.erase(r-l);

//         // s.insert(p[i]);
//         ++mp[r-p[i]];
//         ++mp[p[i]-l];

//         cout << ((--mp.end())->first) << " ";

//         s.insert(p[i]);
//     }
//     return 0;
// }

// ---- attemp 2

// #include <bits/stdc++.h>
// using namespace std;

// const int mxN = 2e5;
// int x, n;
// int p[mxN];

// int main() {
//     cin >> x >> n;

//     set<int> s;
//     s.insert(0);
//     s.insert(x);

//     map<int, int> mp;
//     mp[x] = 1;

//     for(int i=0; i<n; ++i) {
//         cin >> p[i];
//         auto it = s.lower_bound(p[i]);
//         int r = *it;
//         --it;
//         int l = *it;

//         --mp[r-l];
//         if(mp[r-l]==0) 
//             mp.erase(r-l);
//         // mp.erase(r-l);
//         ++mp[r-p[i]];
//         ++mp[p[i]-l];

//         cout << ((--mp.end())->first) << " ";
//         s.insert(p[i]);
//     }

//     return 0;
// }

// -- attempt 3 ---
#include <bits/stdc++.h>
using namespace std;

int x, n;
const int mxN = 2e5;
int p[mxN];

int main() {
    cin >> x >> n;

    set<int> s;
    s.insert(0);
    s.insert(x);

    map<int, int> mp;

    mp[x] = 1;
    
    for(int i=0; i<n; ++i) {
        cin >> p[i];
        auto it = s.lower_bound(p[i]);
        int r = *it;
        --it;
        int l = *it;
        // this time we should concentrate on the edge case - the initial one.
        // imagine we solve the initial case.
        mp[r-l]--;
        if(mp[r-l] == 0) 
            mp.erase(r-l);

        // cout << "\n------------";
        // cout << endl;
        // cout << "erase mp[r-l=" << r-l << "]"<< endl;

        // cout << endl;
        // cout << "r:" << r << endl;
        // cout << "l:" << l << endl;

        ++mp[r-p[i]];
        ++mp[p[i]-l];

        // cout << "mp[" << r <<"-p[" << i << "]=" << r - p[i] << "]=" << mp[r-p[i]] << endl;
        // cout << "mp[" << "p[" << i << "]-" << l << "=" << p[i]-l << "]=" << mp[p[i]-l] << endl;

        // for(auto& elem : mp) cout << elem.first << ":" << elem.second << " ";
        // cout << endl;

        // cout << "max:";
        cout << (--mp.end())->first << " ";

        s.insert(p[i]);

    }
    return 0;
}

