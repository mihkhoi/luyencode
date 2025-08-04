#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10], n, b[10], c = 0;
    for (int i = 1; i <= 10; i++) {
        cin >> a[i];
    }
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        if (n == a[i]) {
            b[c++] = i;
        }
    }
    for (int i = 0; i < c; i++) {
        for (int j = i + 1; j < c; j++) {
            if (b[i] > b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    if (c != 0) {
        for (int i = 0; i < c; i++) {
            cout << b[i] << " ";
        }
    } else {
        cout << -1;
    }
    return 0;
}
