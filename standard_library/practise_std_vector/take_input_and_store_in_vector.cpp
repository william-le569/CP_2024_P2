// exercises from Chat GPT
// ./reading_CP_book_CP_diary_2025.xlsx

#include <bits/stdc++.h>
using namespace std;

#define pb push_back


int main() {
    vector<int> a;
    
    int n;
    cin >> n;
    int m = n;
    while(m--) {
        int x;
        cin >> x;
        a.pb(x);
    }


    for(int i = 0; i<n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}