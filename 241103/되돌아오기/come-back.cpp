#include <iostream>
using namespace std;

//          동  서  남  북
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y;
    x = y = 0;

    int n;
    cin >> n;

    char d;
    int dist, dir;

    int answer = -1;

    int time = 0;
    for (int i = 0; i < n; i++) {
        cin >> d >> dist;

        if (answer != -1) continue;

        if (d == 'N') dir = 3;
        else if (d == 'E') dir = 0;
        else if (d == 'W') dir = 1;
        else dir = 2;

        for (int j = 0; j < dist; j++) {
            time++;
            x += dx[dir];
            y += dy[dir];

            if (x == 0 && y == 0) {
                answer = time;
                break;
            }
        }
    }

    cout << answer;

    return 0;
}