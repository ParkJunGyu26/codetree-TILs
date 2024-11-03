#include <iostream>
using namespace std;

int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

int graph[51][51];

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t, r, c, dir;
    char d;
    cin >> n >> t >> r >> c >> d;

    r--;
    c--;

    if (d == 'U') dir = 3;
    else if (d == 'D') dir = 0;
    else if (d == 'R') dir = 1;
    else dir = 2;

    for (int i = 0 ; i < t; i++) {
        int nx = c + dx[dir];
        int ny = r + dy[dir];

        if (-1 < nx && nx < n && -1 < ny && ny < n) {
            c = nx;
            r = ny;
        } else {
            dir = 3 - dir;
        }
    }

    cout << r+1 << " " << c+1;

    return 0;
}