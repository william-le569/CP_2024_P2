// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int n) {
    int count = 0;
    if(n<=1) return false;
    else {
        for(int i=2; i * i <= n; ++i) {
            if(n%i==0)
                count ++; 
        }
    }
    if(count > 0) return false;
    else return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;
    int b;
    for(int a=n/2; ; a--) {
        b = n - a;
        if(!isPrime(a) && !isPrime(b)) {
            cout << a << ' ' << b;
            break;
        }
    }
    return 0;
}