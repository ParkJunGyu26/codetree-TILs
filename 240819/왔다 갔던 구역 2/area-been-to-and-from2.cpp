#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int now = 1000;
    int points[2001] = {0};
    for (int i = 0; i < n; i++) {
        int cnt;
        char direction;

        cin >> cnt >> direction;

        if (direction == 'R') {
            for (int j = now; j < now+cnt; j++) points[j]++;
            now += cnt;
        } else {
            for (int j = now; j > now-cnt; j--) points[j]++;
            now -= cnt;
        }
    }

    int answer = 0;
    for (int i = 0; i <= 2000; i++) {
        if (points[i] >= 2) answer++;
    }

    cout << answer;
    return 0;
}