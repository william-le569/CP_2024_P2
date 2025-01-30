#include <bits/stdc++.h>
using namespace std;

#define ar array

const int mxN = 2e5;
int n, ans[mxN];
ar<int, 2> a[mxN];

int main() {
    // int n;
    // cin >> n;
    // for(int i=0; i<n; ++i) {
    //     cin >> a[i][1] >> a[i][0];
    // }
    // sort(a, a+n);
    set<ar<int, 2>> s;
    auto it=s.lower_bound({1});
    // cout <<"i:" << i << endl;
    cout <<"*it:" << (*it)[0] << " " << (*it)[1] << endl;
    int b = (*it)[1]+1;
    cout << b << endl;
    // if (it != s.end()) {
    //     cout << "*it: " << (*it)[0] << " " << (*it)[1] << endl;
    // } else {
    //     cout << "No element found!" << endl;
    // }

    // cout << "a[i][1]=" << a[i][1] << endl;
    // cout << "a[i][0]=" << a[i][0] << endl;
    // for(int i=0; i<n; ++i) {
    //     auto it=s.lower_bound({a[i][1]}); // s contains departing time and room number 
    //                                         // -> lower_bound based on starting time
    //     cout <<"i:" << i << endl;
    //     cout <<"*it:" << (*it)[0] << " " << (*it)[1] << endl;
    //     cout << "a[i][1]=" << a[i][1] << endl;
    //     cout << "a[i][0]=" << a[i][0] << endl;
    //     if(it!=s.begin()) {
    //         --it;
    //         cout <<"*it--:" << (*it)[0] << " " << (*it)[1] << endl;
    //         ans[i]=(*it)[1];
    //         s.erase(it);
    //         cout << "ans[" << i << "]=" << ans[i] << endl;
    //         for(auto &elem : s) cout << "values of s:" << elem[0] << " " << elem[1] << endl;
    //     } else //solve initial case - first case
    //         ans[i]=s.size(), cout << "ans[" << i << "]=" << ans[i] << endl;
    //     s.insert({a[i][0], ans[i]}); // s contains departing day and room number.
    // }
    // cout << s.size() << "\n";
    // for(int i=0; i<n; ++i) {
    //     cout << ++ans[i] << " ";
    // }
    return 0;
}