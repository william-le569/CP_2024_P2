// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int p, n;
    cin >> p >> n;
    vector<int> x(n);
    int max = 0;
    int tmp;
    for(int i=0; i<n; ++i) {
        cin >> x[i];
        tmp = x[i] % p;
        if(tmp>max) max = tmp;
    }
    vector<int> hash(max+1, 0);

    int res = -1;
    for(int i=0; i<n; ++i) {
        hash[x[i]%p]++;
        if(hash[x[i]%p]>=2) {
            res = x[i];
            break;
        }
    }
    int count = 0;

    if(res != -1) {
        for(int i=0; i<n; ++i) {
            if(x[i]%p == res%p && count < 1) {
                count++;
            }
            else if(x[i]%p == res%p && count ==1) {
                cout << i + 1;
                break;
            }
 
        }
    }
    else cout << -1;


    return 0;
}

// better solution.

// #include<bits/stdc++.h>
// using namespace std;
// long long a[10000];
// int main()
// {
//     long long  p,n;
//     cin>>p>>n;
//     for(int i=1;i<=n;i++)
//     {
//         int x;cin>>x;
//         a[x%p]++;
//         if(a[x%p]>1){cout<<i<<endl;return 0;}
//     }
//     cout<<-1;
//     return 0;
// }