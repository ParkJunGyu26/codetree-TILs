#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[10];

    int ans = 0;
    for (int i = 0; i < 10; i++) {
        cin >> num[i];
        ans += num[i];
    }

    cout << ans;
    return 0;
}