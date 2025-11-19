#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr = {4, 2, 12, 3, 5, 1, 7};
    int n = arr.size();
    int k = 3;

    deque<int> dq; // chứa chỉ số, không chứa giá trị
    vector<int> result;

    for (int i = 0; i < n; i++) {
        // 1️⃣ Xóa các phần tử không còn nằm trong cửa sổ
        while (!dq.empty() && dq.front() <= i - k) // dia chi front <= i - k -> thuc thi. canh ben trai i-k + 1 
                                                //neu front = i - k + 1 -> front thuoc window.
                                                // front < i - k + 1 -> update front.
            dq.pop_front();

        // 2️⃣ Loại bỏ các phần tử có giá trị >= arr[i]
        // vì arr[i] nhỏ hơn,arr[dq.back()] không thể là min trong tương lai
        while (!dq.empty() && arr[dq.back()] >= arr[i])
            dq.pop_back();

        // 3️⃣ Thêm chỉ số hiện tại vào deque
        dq.push_back(i);

        // 4️⃣ Nếu đã có ít nhất k phần tử, ghi nhận kết quả
        if (i >= k - 1) // cua so luon dai k. left_side >= 0,  i - k + 1 >= 0
            result.push_back(arr[dq.front()]);
    }

    // In kết quả
    for (int x : result) cout << x << " ";
    cout << "\n";

    return 0;
}