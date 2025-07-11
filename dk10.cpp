#include <bits/stdc++.h>
using namespace std;

bool checky(int y) {
    if (y > 0 && y <= 100000) {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
            return true;
        } else {
            return false;
        }
    }
    return false;
}

int main() {
    int m, y;
    cin >> m >> y;
    if (m > 0 && m < 13) {
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            cout << 30;
        } else if (m == 2) {
            cout << (checky(y) ? 29 : 28);
        } else {
            cout << 31;
        }
    } else {
        cout << "INVALID";
    }
    return 0;
}
