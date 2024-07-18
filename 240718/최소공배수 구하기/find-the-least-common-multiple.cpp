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

int lcm(int n, int m) {
    return n * m / gcd(n, m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, MIN, MAX;
    cin >> n >> m;

    MIN = min(n, m);
    MAX = max(n, m);
    cout << lcm(MAX, MIN);

    return 0;
}