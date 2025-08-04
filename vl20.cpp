#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    for (int i = (int)a - 32; i <= (int)b - 32; i++) {
        cout << (char)i << " ";
    }
    return 0;
}
