#include <bits/stdc++.h>
using namespace std;

int i = 0;
int n;

void search() {
    cout << i << " ";
    if(i==n) {
       return;
    }
    i++;
    search();
}

int main() {
    cin >> n;
    search();
    cout << i;
    return 0;
}