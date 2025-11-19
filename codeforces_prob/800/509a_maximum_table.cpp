// De bai
// -> Qui luat -> ket qua la phan tu chinh giua trong tam giac pascal.
// -> Giai bat dang thuc, bien luan tim max cho to hop chap k cua n. Tai truong hop n chan.
// -> k = n/2. -> Co the giai bang cach mo nghiem.
// Accepted

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll factorial(ll n) {
    if(n==0) return 1;
    else if(n==1) return 1;
    else {
        return n * factorial(n-1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    n = (n-1) * 2;
    cout << (factorial(n)/((factorial(n/2) * factorial(n/2))));
    // your code here
    return 0;
}