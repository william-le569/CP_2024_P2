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
//     int d;
//     cin >> d;
//     int a[n];
//     int res = 0;
//     for(int i=0; i<n; ++i) cin >> a[i];
//     for(int i=0; i<n-1; ++i) {
//         for(int j=i+1; j<n; ++j) {
//             if(abs(a[i] - a[j]) <= d) {
//                 res++;
//             }
//         }
//     }
//     cout << res * 2;
//     return 0;
// }

// method 2
// nlogn

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int a[1010];
signed main()
{
	int n,d;
	cin>>n>>d;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int k=0;
	for(int i=1;i<=n;i++)
	{
		k+=upper_bound(a+i,a+1+n,a[i]+d)-a-i-1;
	}	
	cout<<2*k;
}