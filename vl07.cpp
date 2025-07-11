#include <bits/stdc++.h>
using namespace std;

// Hàm tính C(n, k) mà không bị tràn nếu n <= 60
long long combination(int n, int k) {
    if (k > n - k)
        k = n - k; // tận dụng tính chất đối xứng
    long long res = 1;
    for (int i = 1; i <= k; ++i) {
        res *= n - i + 1;
        res /= i;
    }
    return res;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << combination(n, k);
    return 0;
}
