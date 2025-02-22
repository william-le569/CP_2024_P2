#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mod = 1e9 + 7;

ll binary_expotentiation(int base, int exp) {
    if(exp == 0) return 1;
    ll result_even = binary_expotentiation(base, exp / 2);
    ll result_odd = binary_expotentiation(base, (exp - 1) / 2);
    if(exp % 2)
        return (((result_odd * result_odd) % mod) * base) % mod;
    else return (result_even * result_even) % mod;
}

int main() {
    cout << binary_expotentiation(2, 3);
    return 0;
}