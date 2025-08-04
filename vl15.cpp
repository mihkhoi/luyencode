#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << "INVALID";
        return 0;
    }

    // Tìm ƯCLN của a và b
    int gcd = abs(__gcd(a, b));

    a /= gcd;
    b /= gcd;

    // Đưa dấu âm về tử số
    if (b < 0) {
        a *= -1;
        b *= -1;
    }

    // In kết quả
    if (b == 1) {
        cout << a;
    } else if (a == 0) {
        cout << 0;
    } else {
        cout << a << " " << b;
    }

    return 0;
}
