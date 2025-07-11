#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    if(a == 0 || b == 0) {
        cout << "ERROR";
    }
    else cout << setprecision(2) << fixed << a/b;
    return 0;
}
