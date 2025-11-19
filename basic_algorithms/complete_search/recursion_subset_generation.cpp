#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;         // mảng đầu vào
vector<int> subset;    // tập con hiện tại

void search(int i) {
    if (i == n) {
        // Khi đã xét hết phần tử, in tập con hiện tại
        cout << "{ ";
        for (int x : subset) cout << x << " ";
        cout << "}\n";
        return;
    }

    // Không chọn phần tử a[i]
    search(i + 1);

    // Chọn phần tử a[i]
    subset.push_back(a[i]);
    search(i + 1);

    // Quay lui (backtrack)
    subset.pop_back();
}

int main() {
    a = {1, 2, 3};
    n = a.size();
    search(0);
}