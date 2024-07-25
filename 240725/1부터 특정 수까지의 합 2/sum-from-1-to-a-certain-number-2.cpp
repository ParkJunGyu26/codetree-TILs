#include <iostream>
using namespace std;

int n;

int prefixSum(int n) {
    if (n == 1) return 1;
    return n + prefixSum(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int ans = prefixSum(n);
    cout << ans;
    return 0;
}