#include <bits/stdc++.h>
using namespace std;

// Global variables
int n;  // số phần tử
vector<int> permutation;       // lưu hoán vị hiện tại
vector<bool> chosen;           // đánh dấu phần tử đã chọn

// Hàm đệ quy sinh hoán vị
void search() {
    if (permutation.size() == n) {
        // Base case: hoán vị đầy đủ, in ra
        for (int x : permutation) cout << x << " ";
        cout << "\n";
    } else {
        // Thử chọn từng phần tử chưa dùng
        for (int i = 0; i < n; i++) {
            if (chosen[i]) continue;       // bỏ qua nếu đã chọn
            chosen[i] = true;              // đánh dấu đã chọn
            permutation.push_back(i);      // thêm vào hoán vị
            search();                      // đệ quy
            chosen[i] = false;             // backtrack
            permutation.pop_back();        // bỏ phần tử khỏi hoán vị
        }
    }
}

int main() {
    cout << "Nhap n: ";
    cin >> n;

    permutation.clear();
    chosen.assign(n, false);

    cout << "Tat ca hoan vi cua 0.."<< n-1 <<" la:\n";
    search();

    return 0;
}