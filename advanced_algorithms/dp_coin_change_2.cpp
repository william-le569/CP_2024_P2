#include <bits/stdc++.h>
using namespace std;

int change(int amount, int coins[], int size) {
    int dp[amount + 1] = {0};
    dp[0] = 1;
    for (int i = 0; i < size; ++i) {
        // for (int j = coins[i]; j <= amount; ++j) {
        //     dp[j] += dp[j - coins[i]];
        // }

        // for (int j = 0; j <= amount; ++j) {
        //     if(j = 0) dp[j] = 1;
        //     else if (j - coins[i] >= 0) {dp[j] += dp[j - coins[i]];}
        // }


        for (int j = 1; j <= amount; ++j) {
            if (j - coins[i] >= 0) {dp[j] += dp[j - coins[i]];}
        }

    }
    return dp[amount];
}

int main() {
    int amount;
    cin >> amount;

    int n; // number of coins
    cin >> n;

    int coins[n];
    for (int i = 0; i < n; ++i) cin >> coins[i];
    
    int result = change(amount, coins, n);

    cout << result << endl;

    return 0;
}


