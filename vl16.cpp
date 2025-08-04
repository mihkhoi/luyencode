#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    if (a == 0 || b == 0) {
        cout << 0;
        return 0;
    }
    int bcnn = (a * b) / __gcd(a, b);
    cout << bcnn;
    return 0;
}
