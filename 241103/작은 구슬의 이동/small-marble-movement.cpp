#include <iostream>
using namespace std;

// 아래, 오른쪽, 왼쪽, 위
int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

bool InRange(int x, int y, int n) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int graph[51][51];

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t, r, c;
    char d; // 이동 방향
    cin >> n >> t;
    cin >> r >> c >> d;

    int dir;
    if (d == 'U') dir = 3; // 위로
    else if (d == 'D') dir = 0; // 아래
    else if (d == 'R') dir = 1; // 오른쪽
    else dir = 2; // 왼쪽

    for (int i = 0; i < t; i++) {
        int nx = c + dx[dir];
        int ny = r + dy[dir];

        if (!InRange(nx, ny, n))
            dir = 3 - dir;
        
        r = ny;
        c = nx;
    }

    cout << r+1 << " " << c+1;

    return 0;
}