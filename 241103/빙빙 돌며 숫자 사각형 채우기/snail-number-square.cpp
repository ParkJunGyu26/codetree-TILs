#include <iostream>
using namespace std;

int graph[101][101];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m;
int x, y, dir;

bool InCondition(int x, int y) {
    return (-1 < x && x < m && -1 < y && y < n && graph[y][x] == 0);
}

void answer(int num) {
    if (!InCondition(x + dx[dir], y + dy[dir]))
        dir = (dir+1)%4;

    int nx = x + dx[dir];
    int ny = y + dy[dir];

    graph[ny][nx] = num;
    x = nx;
    y = ny;
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    x = y = dir = 0;

    int num = 1;
    graph[y][x] = 1;
    for (int i = 1; i < n*m; i++) {
        num++;
        answer(num);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}