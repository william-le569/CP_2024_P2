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

    for(int i=0; i<n; ++i) {
        cout << a[i] << " ";
    }

    if(a.empty()) cout << "Vector is empty";
    else cout << "Vector is not empty";
    cout << endl;

    cout << "Length of vector is " << a.size()<< endl;

    return 0;
}