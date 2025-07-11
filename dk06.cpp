#include<bits/stdc++.h>
using namespace std;

void solve(int a, int b) {
    if(a == 0 && b == 0) {
        cout << "WOW";
    }
    else if(a == 0 && b != 0) {
        cout << "NO";
    }
    else {
        cout << setprecision(2) << fixed << (double)-b/(double)a;
    }
}

int main() {

    int a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
