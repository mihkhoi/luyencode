#include<bits/stdc++.h>
using namespace std;

void solve(double a, string s, double b) {
    if(s == "+") {
        cout << fixed << setprecision(2) << a + b;
    }
    else if(s == "-") {
        cout << fixed << setprecision(2) << a - b;
    }
    else if(s == "*") {
        cout << fixed << setprecision(2) << a * b;
    }
    else {
        if(b != 0) {
            cout << fixed << setprecision(2) << a / b;
        }
        else {
            cout << "Math Error";
        }
    }
}

int main(){
    double a, b;
    string s;
    cin >> a >> s >> b;
    solve(a, s, b);
    return 0;
}
