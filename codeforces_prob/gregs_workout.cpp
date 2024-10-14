#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
   
    int b[3] = {0};
    int max = 0;
    int key;
    cin >> n ;
    int a[n];
    for(int i = 0; i<n; ++i) {    
        cin >> a[i];
        if(i%3==0) {
            b[0] += a[i];
            if(b[0]>max) {
                max = b[0];
                key = 0;
            }
        }
        else if(i%3==1) {
            b[1] += a[i];
            if(b[1]>max) {
                max = b[1];
                key = 1;
            }
        }
        else if(i%3==2) {
            b[2] += a[i];
            if(b[2]>max) {
                max = b[2];
                key = 2;
            }
        }
    }


    if(key == 0) cout << "chest" << endl;
    else if(key == 1) cout << "biceps" << endl;
    else if(key == 2) cout << "back" << endl;
    return 0;
}