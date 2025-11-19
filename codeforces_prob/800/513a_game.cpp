// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n1, n2;
    int k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    if(n1 <= n2) cout << "Second";
    else  cout << "First";

    return 0;
}