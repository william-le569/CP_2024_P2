// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int l, r, a;
//     cin >> l >> r >> a ;

//     if(r + a == 0 || l + a == 0) cout << 0;
//     else if(r - l + a >= 0) 
//         cout << 2* ( ceil((r - l + a) / 2) + l );
//     else {
//         cout << 2 * ( (-1) * ceil(abs((float)(r - l + a) / 2)) + l );
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int a, b, c;
signed main()
{
	cin>>a>>b>>c;
	if(b+c<=a||a+c<=b)
	{
		cout<<2*min(a+c,b+c);
	}
	else cout<<(a+b+c)/2*2;
}