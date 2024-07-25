#include <iostream>
using namespace std;

int n;

int splitNumSum(int n) {
    if (n == 0) return (n % 10) * (n % 10);
    return splitNumSum(n / 10) + (n % 10) * (n % 10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int ans = splitNumSum(n);
    cout << ans;
    return 0;
}