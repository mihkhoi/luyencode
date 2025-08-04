#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    bool check = false;
    for (int i = 0; i < n; i++) {
        if (x == a[i]) {
            check = true;
        }
    }
    if (!check) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}
