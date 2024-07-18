#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int n, int m) {
    while (m != 0) {
        int tmp = n;
        n = m;
        m = tmp % m;
    }
    return n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int num[2];
    cin >> num[0] >> num[1];
    sort(num, num+2);
    
    int n = num[1];
    int m = num[0];

    cout << gcd(n, m);

    return 0;
}