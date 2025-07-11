#include<bits/stdc++.h>
using namespace std;

void solve(long long n) {
    long long a = sqrt(n);
    if(n == (a*a)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main() {
    long long n;
    cin >> n;
    solve(n);
    return 0;
}
