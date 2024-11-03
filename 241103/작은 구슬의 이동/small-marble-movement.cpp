#include <iostream>
using namespace std;

// U(위), D(아래), R(오른쪽), L(왼쪽) 순서로 변경
int dx[4] = {0, 0, 1, -1};  // 변경
int dy[4] = {-1, 1, 0, 0};  // 변경

bool InRange(int x, int y, int n) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t, r, c;
    char d;
    cin >> n >> t;
    cin >> r >> c >> d;
    
    // 0-based로 변환
    r--; 
    c--;

    // 방향 설정 변경
    int dir;
    if (d == 'U') dir = 0;      // 위
    else if (d == 'D') dir = 1; // 아래
    else if (d == 'R') dir = 2; // 오른쪽
    else dir = 3;               // 왼쪽

    for (int i = 0; i < t; i++) {
        int nx = c + dx[dir];
        int ny = r + dy[dir];

        if (!InRange(nx, ny, n)) {
            // 방향 전환: U<->D(0<->1), R<->L(2<->3)
            dir = (dir % 2 == 0) ? dir + 1 : dir - 1;
            nx = c + dx[dir];
            ny = r + dy[dir];
        }
        
        r = ny;
        c = nx;
    }

    // 1-based로 변환하여 출력
    cout << r+1 << " " << c+1;

    return 0;
}