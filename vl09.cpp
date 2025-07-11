#include <bits/stdc++.h>
using namespace std;

double gt(long long n) {
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    return s;
}

int main() {
    long long n;
    double x, s = 0;
    cin >> x >> n;
    for (long long i = 1; i <= n; i++) {
        s += pow(x, i) / gt(i);
    }
    cout << fixed << setprecision(2) << s;
    return 0;
}
