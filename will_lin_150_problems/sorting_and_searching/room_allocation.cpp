// #include <bits/stdc++.h>
// using namespace std;

// #define ar array

// const int mxN = 2e5;
// int n, ans[mxN];
// ar<int, 2> a[mxN];

// int main() {
//     // int n;
//     cin >> n;
//     for(int i=0; i<n; ++i) {
//         cin >> a[i][1] >> a[i][0];
//     }
//     sort(a, a+n);
//     set<ar<int, 2>> s;
//     for(int i=0; i<n; ++i) {
//         auto it=s.lower_bound({a[i][1]}); 
//         // auto it=s.lower_bound(a[i][1]); 
//         if(it!=s.begin()) {
//             --it;
//             ans[i]=(*it)[1];
//             s.erase(it);
//         } else
//             ans[i]=s.size();
//         s.insert({a[i][0], ans[i]});
//     }
//     cout << s.size() << "\n";
//     for(int i=0; i<n; ++i) {
//         cout << ++ans[i] << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define ar array

// const int mxN = 2e5;
// int n, ans[mxN];
// ar<int, 2> a[mxN];

// int main() {
//     // int n;
//     cin >> n;
//     for(int i=0; i<n; ++i) {
//         cin >> a[i][1] >> a[i][0];
//     }
//     sort(a, a+n);
//     set<ar<int, 2>> s;
//     for(int i=0; i<n; ++i) {
//         auto it=s.lower_bound({a[i][1]}); // s contains departing time and room number 
//                                             // -> lower_bound based on starting time
                                                //compare the curent-starting time with previous-ending-time.
//         cout <<"i:" << i << endl;
//         cout <<"*it:" << (*it)[0] << " " << (*it)[1] << endl;
//         cout << "a[i][1]=" << a[i][1] << endl;
//         cout << "a[i][0]=" << a[i][0] << endl;
//         if(it!=s.begin()) {
//             --it;
//             cout <<"*it--:" << (*it)[0] << " " << (*it)[1] << endl;
//             ans[i]=(*it)[1];
//             s.erase(it);
//             cout << "ans[" << i << "]=" << ans[i] << endl;
//             for(auto &elem : s) cout << "values of s:" << elem[0] << " " << elem[1] << endl;
//         } else //solve initial case - first case
//             ans[i]=s.size(), cout << "ans[" << i << "]=" << ans[i] << endl;
//         s.insert({a[i][0], ans[i]}); // s contains departing day and room number.
//     }
//     cout << s.size() << "\n";
//     for(auto &elem : s) cout << "values of s':" << elem[0] << " " << elem[1] << endl;
//     for(int i=0; i<n; ++i) {
//         cout << ++ans[i] << " ";
//     }
//     return 0;
// }
// 3
// 1 2
// 2 4
// 4 4

// #include <bits/stdc++.h>
// using namespace std;

// #define ar array

// const int mxN = 2e5;
// int n, ans[mxN];
// ar<int, 2> a[mxN];

// int main() {
//     // int n;
//     cin >> n;
//     for(int i=0; i<n; ++i) {
//         cin >> a[i][1] >> a[i][0];
//     }
//     sort(a, a+n);
//     set<ar<int, 2>> s;
//     for(int i=0; i<n; ++i) {
//         auto it=s.lower_bound({a[i][1]}); // when i = 0 -> "it" will return s.end();
//         if(it!=s.begin()) {
//             --it;
//             ans[i]=(*it)[1];
//             s.erase(it);
//         } else
//             ans[i]=s.size();
//         s.insert({a[i][0], ans[i]});
//     }
//     cout << s.size() << "\n";
//     for(int i=0; i<n; ++i) {
//         cout << ++ans[i] << " ";
//     }
//     return 0;
// }

//----------- att1

#include <bits/stdc++.h>
using namespace std;

#define ar array

const int mxN = 2e5;
int n;
int ans[mxN];

ar<int, 3> a[mxN];

// bool cmp(ar<int ,3>& x, ar<int, 3>& y) {
//     if (x[0] == y[0]) {
//         if(x[1] == y[1]) return x[2] > y[2];
//         return x[1] > y[1];
//     }
//     return x[0] > y[0];
// }

int main() {
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> a[i][1] >> a[i][0]; // arrange followings departure.
        a[i][2]=i;
    }
    // sort(a, a+n, cmp);
    sort(a, a+n);
    set<ar<int, 2>> s;

    for(int i=0; i<n; ++i) {
        auto it = s.lower_bound({a[i][1]});
        if(it!=s.begin()) {
            --it;
            ans[a[i][2]] = (*it)[1];
            s.erase(it);

        } else {
            ans[a[i][2]] = s.size();
        }
        s.insert({a[i][0], ans[a[i][2]]});
    }
    cout << s.size() << endl;
    for(int i=0; i<n; ++i) {
        cout << ++ans[i] << " ";
    }
    return 0;
}