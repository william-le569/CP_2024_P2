// Accepetd
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    // Nhan xet -> n chan thi Mah se chac chan win vi a <= n.
    // Khi n le, gia su Mah co cach chon thi khien n giam thieu ve mot so le~, khong am. n' la mot so le khong am -> Ehab se win.
    // Chung minh, gia su ton tai mot cach chon khien Mah thang trong truong hop n la so le~. n = 2*m + 1
    // n' = n - a_M , a_M = 2 * k -> n' = 2 *m + 1 - 2 * k = 2 * (m - k) +1
    int n;
    cin >> n;
    if(n%2) cout << "Ehab";
    else cout << "Mahmoud";
    return 0;
}