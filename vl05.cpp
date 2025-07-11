#include <bits/stdc++.h>
using namespace std;

int main() {
    int s = 0, n;
    cin >> n;
    for (int i = 1; i <= 3 * n + 1; i++) {
        if (i % 2 == 0) {
            s -= i;
        } else {
            s += i;
        }
    }
    cout << s;
    return 0;
}
