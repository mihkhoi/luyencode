#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long left = 1, right = 2e9, ans = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long sum = mid * (mid + 1) / 2;

        if (sum <= N) {
            ans = mid;      // có thể là đáp án
            left = mid + 1; // thử giá trị lớn hơn
        } else {
            right = mid - 1; // quá lớn, giảm lại
        }
    }

    cout << ans << endl;
    return 0;
}
