#include<bits/stdc++.h>
using namespace std;
//van con loi mot test case an

void solve(int y) {
    if(y > 0 && y <= 100000) {
        if(y%400 == 0 || (y%4 == 0 && y%100 != 0)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else {
        cout << "INVALID";
    }
    
}

int main() {
    int y;
    cin >> y;
    solve(y);
    return 0;
}
