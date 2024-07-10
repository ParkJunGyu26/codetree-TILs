#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[10], cnt;
    int ans = 0;

    for (int i = 0; i < 10; i++) {
        cin >> num[i];
        ans += num[i];
        if (num[i] == 0) {
            cnt = i;
            break;
        }
    }

    cout << ans << " ";
    double answer = ans / (double) cnt;
    printf("%.1f", answer);

    return 0;
}