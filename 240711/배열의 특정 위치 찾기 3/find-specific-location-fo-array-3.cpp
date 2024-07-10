#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[100];

    int cnt = 0;
    while (1) {
        cin >> num[cnt];
        if (num[cnt] == 0) break;
        cnt++;
    }

    int ans = 0;
    for (int i = cnt-1; i >= 0; i--) ans += num[i];

    cout << ans;
    return 0;
}