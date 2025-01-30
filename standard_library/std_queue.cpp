#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    // for(int i=0; i<q.size(); ++i) cout << q[i] << " ";
    queue<int> tmp = q;
    while(!tmp.empty()) {
        cout << tmp.front() << " ";
        tmp.pop();
    }

    cout << q.front();
    return 0;
}