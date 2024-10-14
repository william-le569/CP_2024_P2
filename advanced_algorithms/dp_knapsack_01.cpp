#include <bits/stdc++.h>
using namespace std;

int knap_sack(int volume, int w[], int v[], int n) {
    int V[n+1][volume + 1];
    memset(V, 0, sizeof(V));

    for (int i = 1; i <= n; ++i) {
        for( int j = 0; j <= volume; ++j) {
            if (j >= w[i - 1]) {
                V[i][j] = max(V[i - 1][j], v[i - 1] + V[i - 1][j - w[i - 1]]);
            } else {
                V[i][j] = V[i - 1][j];
            }
        }
    }

    return V[n][volume];
}

int main() {
    int volume;
    cin >> volume;

    int n;
    cin >> n;
    
    int w[n];
    for (int i = 0; i < n; ++i) cin >> w[i];

    int v[n];
    for (int i = 0; i < n; ++i) cin >> v[i];

    int result = knap_sack(volume, w, v, n);

    cout << result << endl;

    return 0;
}