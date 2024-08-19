#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int color[200001] = {0}; // 1은 블랙, -1은 화이트
    int now = 100000;
    for (int i = 0; i < n; i++) {
        int cnt;
        char direction;
        cin >> cnt >> direction;

        cnt--;
        if (direction == 'R') {
            for (int j = now; j <= now+cnt; j++) color[j] = 1;
            now += cnt;
        } else {
            for (int j = now; j >= now-cnt; j--) color[j] = -1;
            now -= cnt;
        }
    }

    int w, b;
    w = b = 0;

    for (int i = 0; i <= 200000; i++) {
        if (color[i] == 1) b++;
        else if (color[i] == -1) w++;
    }

    cout << w << " " << b;
    return 0;
}