#include<bits/stdc++.h>
using namespace std;
//**** */
int main()  {
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++ i) cin >> a[i];

    int t = (1 << 13);

    int m = n - 1;

    int sum = 0;

    for(int i = 0; i < m; ++i) {
        while((t+i)>m) t = t >> 1;
        a[i + t] += a[i];
        sum += a[i];
        cout << sum << endl;
    }



    return 0;
}