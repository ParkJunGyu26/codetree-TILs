#include <iostream>
using namespace std;

int graph[101][101];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool checkAnswer(int x, int y, int n) {
    int cnt = 0;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if ( -1 < nx && nx < n && -1 < ny && ny < n ) {
            if (graph[ny][nx] > 0) cnt++;
        }
    }

    return (cnt == 3);
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        graph[r-1][c-1]++;
        
        if (checkAnswer(c-1, r-1, n)) cout << 1;
        else cout << 0;
        cout << "\n";
    }
    return 0;
}