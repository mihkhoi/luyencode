#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    bool found = false;

    cin >> a >> b;

    if (a > b) {
        swap(a, b);
    }

    for (int i = b - 1; i > a; i--) {
        if (i % 3 == 0) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "NOT FOUND";
    }

    return 0;
}
