#include <bits/stdc++.h>
#include <devcpp_timer.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long max1 = a[n - 1] * a[n - 2] * a[n - 3];
    long long max2 = a[0] * a[1] * a[n - 1];
    cout << max(max1, max2) << endl;
    return 0;
}

// Bộ 3 hoàn hảo
// Bai tìm tích lớn nhất của 3 phần tử trong mảng
// Thay vì dùng 3 vòng lặp chúng ta chỉ cần chia ra 2 trường hợp
// Trường hợp 1: dương hết và âm hết sẽ lấy 3 số nhân lại sẽ ra số lớn nhất
// Trường hợp 2: vừa dương vừa âm vì mình sẽ lấy 2 số âm đầu tiên và 1 số dương cuối cùng nhân lại sẽ ra số tích lớn nhất
// Để thực hiện 2 trường hợp trên thì chúng ta chỉ cần sắp xếp lại mảng theo chiều tăng dần rồi áp dụng công thức ở trên là ra
