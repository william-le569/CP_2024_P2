// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// string s[8];
// bool b[8];

// int main() {
//     for(int i=0; i<8; ++i)
//         cin >> s[i];
//     int p[8], ans=0;
//     iota(p, p+8, 0);
//     do {
//         bool ok=1;
//         for(int i=0; i<8; ++i)
//             ok&=s[i][p[i]]=='.';
//         memset(b, 0, 15); //sets 15 byte to zero.
//         for(int i=0; i<8; ++i) {
//             if(b[i+p[i]])
//                 ok=0;
//             b[i+p[i]]=1;
//         }
//         memset(b, 0, 15);
//         for(int i=0; i<8; ++i) {
//             if(b[i+7-p[i]])
//                 ok=0;
//             b[i+7-p[i]]=1;
//         }
//         ans+=ok;

//     } while(next_permutation(p, p+8));
//     cout << ans;
//     // cout << sizeof(char);
//     return 0;
// }

//----------- ytb tutorial -------

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<string> chessBoard(8);
//     for(int i=0; i<8; ++i)
//         cin >> chessBoard[i];
//     int count=0;
//     vector<int> columns(8); // columns[i] at row i -> it keeps information of cell that contains queen.
//     iota(columns.begin(), columns.end(), 0);
//     do {
//         bool valid = true;
//         for(int i=0; i<8; ++i) {
//             if(chessBoard[i][columns[i]]!='.') {
//                 valid = false;
//                 break;
//             }
//         }
//         vector<bool> diagonalOccupied(15, false);
//         for(int i=0; i<8; ++i) { // Check diagonal go from the right to left.
//             if(diagonalOccupied[i+columns[i]]) // Check if diagonal been used before.
//                 valid=false;
//             diagonalOccupied[i+columns[i]] = true;
//         }
//         for(int i=0; i<15; ++i)
//             diagonalOccupied[i] = false;
//         for(int i=0; i<8; ++i) {
//             if(diagonalOccupied[i+7-columns[i]])  // Check diagonal go from the left to the right.
//                 valid=false;
//             diagonalOccupied[i+7-columns[i]] = true;
//         }
//         count += valid;

//     } while(next_permutation(columns.begin(), columns.end()));
//     cout << count;
// }


//------- Backtracking and Bitmask

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n = 8; // Fixed for 8-Queens
vector<string> chessBoard(n);
ll solutions = 0;

// Backtracking function using bitmasking
void solve(int row, int cols, int diag1, int diag2) {
    if (row == n) {
        // All queens placed successfully
        ++solutions;
        return;
    }

    // Determine free positions
    int freePositions = ((1 << n) - 1) & ~(cols | diag1 | diag2);

    while (freePositions) {
        // Pick the rightmost free position
        int pos = freePositions & -freePositions;

        // Check if the cell is valid ('.')
        int col = __builtin_ctz(pos); // Convert bit position to column index
        if (chessBoard[row][col] != '.') {
            freePositions ^= pos; // Remove invalid position
            continue;
        }

        // Mark this position as occupied and recurse
        solve(row + 1,
              cols | pos,
              (diag1 | pos) << 1,
              (diag2 | pos) >> 1);

        // Remove this position from free positions
        freePositions ^= pos;
    }
}

int main() {
    // Input chessboard
    for (int i = 0; i < n; ++i)
        cin >> chessBoard[i];

    // Start backtracking with empty board
    solve(0, 0, 0, 0);

    // Output the number of solutions
    cout << solutions << endl;

    return 0;
}