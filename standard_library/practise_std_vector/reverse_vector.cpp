// exercises from Chat GPT
// ./reading_CP_book_CP_diary_2025.xlsx

#include <bits/stdc++.h>
using namespace std;

#define pb push_back


int main() {
    int n = 5;
    vector<int> a(n, 10);
    
    for(int i=0; i<3; ++i) {
        a[i] = i;
    }
    reverse(a.begin(), a.end());
    vector<int>::iterator it;

    for(it = a.begin(); it != a.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}