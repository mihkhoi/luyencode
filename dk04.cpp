#include<bits/stdc++.h>
using namespace std;

void solve(double n) {
    int a = n;
    double r = n - a; 
    if(n > 0) {
        if(r >= 0.5) {
            cout << a + 1;
        }
        else cout << a;
    }
    else {
        if(r >= -0.5) {
            cout << a;
        }
        else cout << a - 1;
    }
}

int main() {
    double n;
    cin >> n;
    solve(n);
    return 0;
}
