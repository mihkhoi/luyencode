#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    int temp = 0;
    string change;
    while(n != 0) {
        temp = n%10;
        change += temp;
        n /= 10;
    }
    cout << change;
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}
