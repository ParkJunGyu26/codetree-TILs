#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[100];

    int cnt = 100;

    for (int i = 0; i < 100; i++) {
        cin >> num[i];
        if (num[i] == 0) {
            cnt = i;
            break;
        }
    }

    int ans = 0;
    for (int i = cnt-1; i >= cnt-3; i--) ans += num[i];

    cout << ans;
    return 0;
}