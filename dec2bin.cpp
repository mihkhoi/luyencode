#include <bits/stdc++.h>
using namespace std;

string to_binary(long long n) {
    if (n == 0)
        return "0";
    string s = "";
    while (n > 0) {
        s = char((n % 2) + '0') + s; // cong s o dang sau de khoi phai dung ham reverse de dao nguoc lai
        // tai sao cong cho 0 vi trong bang ma ASCII thi char n%2 la mot so nao do trong ban ma de mun hien ra so 0 dung thi phan phai cong them cho 0 0 -> 0, 1 -> 1
        n /= 2;
    }
    return s;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        cout << to_binary(n) << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
//     int n;
//     string s;
//     cin >> n;
//     while (n != 0) {
//         if (n % 2 == 0) {
//             s = s + '0';
//             n = n / 2;
//         } else {
//             s = s + '1';
//             n = n / 2;
//         }
//     }
//     for (int i = s.length() - 1; i >= 0; i--) {
//         cout << s[i];
//     }
//     return 0;
// }
