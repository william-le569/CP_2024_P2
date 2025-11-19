// Accepted
// Chua ap dung optimal hash.
// Khi loi giai xuat hien 2 vong lap for de tao bang hash thi chua ap dung optimal hash.
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;
    vector<int> a(n);
    int max = 0;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        if(a[i]>max) max = a[i];
    }
    vector<int> hash(max, 0);
    for(int i=0; i<n; ++i) {
        hash[a[i]-1]++; // 0-based convertion.
    }
    sort(hash.begin(), hash.end());
    cout << hash[hash.size()-1];
    return 0;
}

//

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n, tmp, a[101], big = 0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        a[tmp]++;
        big = max(big, a[tmp]);
    }
    cout << big - 1;
    return 0;
}