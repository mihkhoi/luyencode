#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());

    int i = 0;
    while (s[i] == '0')
        i++;
    cout << s.substr(i);
    return 0;
}
