#include <iostream>
using namespace std;

int min(int a, int b, int c) {
    int ans = a;
    if (ans > b) ans = b;
    if (ans > c) ans = c;
    return ans;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a, b, c);

    return 0;
}