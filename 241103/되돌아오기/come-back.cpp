#include <iostream>
using namespace std;

// 최대 1000까지 이동 가능 -> (0, 0) 중점이 (1000, 1000) 이라고 생각해야됨.
int graph[2001][2001];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int now_x, now_y;
    now_x = now_y = 1000;

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
            now_x += dx[dir];
            now_y += dy[dir];
            time++;

            if (now_x == 1000 && now_y == 1000) {
                answer = time;
                break;
            }
        }
    }

    cout << time;

    return 0;
}