#include <iostream>
using namespace std;

int graph[101][101];
int n;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool inRange(int x, int y) {
    return -1 < x && x < n && -1 < y && y < n;
}

bool checkThree(int x, int y) {
    int cnt = 0;
    int nx, ny;
    for (int i = 0; i < 4; i++) {
        nx = x + dx[i];
        ny = y + dy[i];
        if (graph[ny][nx] == 1) cnt++;
    }

    return cnt >= 3;
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int answer = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> graph[i][j];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (inRange(j, i) && checkThree(j, i)) answer++;
        }
    }
    cout << answer;
    return 0;
}