#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    cin >> a;

    int ans = (int)a + 1;
    if (ans > 123) ans = 97;

    cout << (char) ans;

    return 0;
}