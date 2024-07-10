#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[10];
    for (int i = 0; i < 10; i++) cin >> num[i];

    int ans1 = 0;
    double ans2;
    int max = 10;

    for (int i = 0; i < 10; i++) {
        if (num[i] >= 250) {
            max = i;
            break;
        }
    }

    for (int i = 0; i < max; i++) {
        ans1 += num[i];
    }

    ans2 = ans1 / (double)max;
    // cout << ans1 << endl;
    // cout << ans1 / max;

    printf("%d %.1f", ans1, ans2);

    return 0;
}