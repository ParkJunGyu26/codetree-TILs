#include <iostream>
using namespace std;

int Sum(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) cnt += i;
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << Sum(n) / 10;

    return 0;
}