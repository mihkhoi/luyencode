#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 1) {
        cout << "NOT FOUND";
    }
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int max = a[0];
    bool found = false;
    for (int i = 1; i < n; i++) {
        if (a[i] < max) {
            cout << a[i];
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "NOT FOUND";
    }
    return 0;
}
