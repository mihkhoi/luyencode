#include<bits/stdc++.h>
using namespace std;

int main() {  
    int n;  
    cin >> n;  
    long long s = 0;
    for(int i = 2;i <= n;i++) {
        s += i;
    }
    cout << s + (2 * n);
    return 0;  
}  

//Tổng = (Số đầu + Số cuối) * (Số lượng phần tử) / 2
//Số đầu = 2
//Số cuối = n
//Số lượng phần tử = (n - 2 + 1) = (n - 1)
//Thay vào công thức:
//Tổng (2 + 3 + 4 + ... + n) = (2 + n) * (n - 1) / 2

//int main() {
//    int n;
//    cin >> n;
//    long long s = (2+n) * (n-1)/2;
//    cout << s + (2*n);
//    return 0;
//}
