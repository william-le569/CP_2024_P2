// In progress -> Still wrong
// #include <bits/stdc++.h>
// using namespace std;

// const int MAXN = 15;  // Giới hạn n <= 12 để tránh TLE
// int n, cnt = 0;
// bool visited[MAXN][MAXN];
// vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

// // Hàm kiểm tra tất cả ô đã thăm chưa
// bool allVisited() {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (!visited[i][j]) return false;
//         }
//     }
//     return true;
// }

// void search(int x, int y) {
//     // Kiểm tra ngoài biên
//     if (x < 0 || x >= n || y < 0 || y >= n) return;
//     // Đã thăm
//     if (visited[x][y]) return;
//     // Đạt đích: kiểm tra tất cả ô đã thăm
//     if (x == n - 1 && y == n - 1) {
//         if (allVisited()) cnt++;
//         return;
//     }
//     // Đánh dấu thăm
//     visited[x][y] = true;
//     // Thử các hướng
//     for (auto [dx, dy] : directions) {
//         search(x + dx, y + dy);
//     }
//     // Backtrack
//     visited[x][y] = false;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     cout << "Nhap n (1 <= n <= 12): ";
//     cin >> n;
    
//     if (n < 1 || n > 12) {
//         cout << "Loi: n phai trong [1, 12].\n";
//         return 1;
//     }
    
//     memset(visited, 0, sizeof(visited));
//     search(0, 0);
    
//     cout << "So duong di: " << cnt << endl;
//     return 0;
// }