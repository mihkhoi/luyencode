#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long double s = 0;
    for (long double i = 2; i <= n; i++) {
        s += 1 / i;
    }
    cout << fixed << setprecision(4) << s;
    return 0;
}
