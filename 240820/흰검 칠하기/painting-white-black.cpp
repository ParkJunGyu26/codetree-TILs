#include <iostream>
using namespace std;

// 블랙은 -1 화이트는 -2 그레이는 -3
int black[200001], white[200001], color[200001];

bool grayCheck(int index) {
    if (black[index] < 2) return false;
    if (white[index] < 2) return false;
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int now = 100000;
    for (int i = 0; i < n; i++) {
        int cnt;
        char direction;
        cin >> cnt >> direction;

        cnt--;
        if (direction == 'R') {
            for (int j = now; j <= now+cnt; j++) {
                if (color[j] != -3) {
                    color[j] = -1;
                    black[j]++;
                }

                if (grayCheck(j)) color[j] = -3;
            }
            now += cnt;
        } else {
            for (int j = now; j >= now-cnt; j--) {
                if (color[j] != -3) {
                    color[j] = -2;
                    white[j]++;
                }

                if (grayCheck(j)) color[j] = -3;
            }
            now -= cnt;
        }
    }

    int w, b, g;
    w = b = g = 0;

    for (int i = 0; i <= 200000; i++) {
        if (color[i] == -3) g++;
        else if (color[i] == -2) w++;
        else if (color[i] == -1) b++;
    }

    cout << w << " " << b << " " << g;
    return 0;
}