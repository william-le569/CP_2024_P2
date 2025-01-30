#include <bits/stdc++.h>
using namespace std;



int main() {
    // int n = 3;
    // map<char, int> mp;

    // char c;
    // int t;
    // // Input
    // for(int i=0; i<n; ++i) {
    //     cin >> c >> t;
    //     mp.insert({c,t});
    // }
    // // Output 
    // // range-based
    // for(const auto& elem : mp) {
    // //     cout << (char)elem.first << " " << elem.second << " ";
    // //     cout << endl;
    // // }
    // // for loop


    // // map<char, int>::iterator itr;
    // // for(itr = mp.begin(); itr != mp.end(); ++itr) {
    // //     cout << (char)itr->first << "  " << itr->second << "  ";
    // //     cout << endl;
    // // }
    // // map<char, int>:: iterator find_itr;
    // // find_itr = mp.find('b');
    // // if(find_itr != mp.end()) {
    // //     cout << "Key is found\n";
    // //     cout << find_itr->first << "  " << find_itr->second << "  " << &find_itr << endl;
    // // } else {
    // //     cout << "Not found!\n";
    // // }

    // // size

    // cout << mp.size() << endl;

    // cout << mp['b'];

    int  n = 5;
    map<int, int> mp;
    // int t;
    // for(int i=0; i<5; ++i) {
    //     cin >> t;
    //     mp.insert(t);
    // }

    // map<int, int>::iterator itr;
    // for(itr=mp.begin(); itr != mp.end(); ++itr) {
    //     cout << (itr->first) << "  " << (itr->second) << endl;
    // }
    mp[8]--;
    cout << mp[8] << endl;


    return 0;
}