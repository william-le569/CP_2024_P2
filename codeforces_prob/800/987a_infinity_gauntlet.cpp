// Accepted
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n;
//     cin >> n;
//     vector<pair<string,string>> ar = {{"Power", "purple"}, {"Time", "green"}, {"Space","blue"},
//                                     {"Soul", "orange"}, {"Reality", "red"}, {"Mind", "yellow"}};
//     vector<string> s(n);
//     vector<int> hash(6, 0); // 0 based
//     cout << 6 - n << "\n";
//     for(int i=0; i<n; ++i) {
//         cin >> s[i];
//         for(int j=0; j<hash.size(); ++j) {
//             if(s[i] == ar[j].second) hash[j]++;
//         }
//     }
//     for(int i=0; i<hash.size(); ++i) {
//         if(hash[i]) continue;
//         else cout << ar[i].first << "\n";
//     }
//     return 0;
// }


// n log n

#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin>>n;
    
    
    map<string,string>s={
    
        {
            "purple","Power"
        },
        {
            "green","Time"
        },
        {
            "blue","Space"
        },
        {
            "orange","Soul"
        },
        {
            "red","Reality"
        },
        {
            "yellow","Mind"
        }
    
    };
    
    for(int i=0;i<n;i++){
        string color;
        cin>>color;
        s.erase(color);
    }
    
    cout<<s.size()<<endl;
    
    for(auto &x :s){
        cout<<x.second<<endl;
    }
 
 
}