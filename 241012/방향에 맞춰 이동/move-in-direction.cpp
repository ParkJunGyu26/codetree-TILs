#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    int n;
    cin >> n;

    int x, y;
    x = y = 0;
    for (int i = 0; i < n; i++) {
        char dire;
        int diff;
        cin >> dire >> diff;

        if (dire == 'N') {
            x += dx[3]*diff;
            y += dy[3]*diff;
        } else if (dire == 'E') {
            x += dx[0]*diff;
            y += dy[0]*diff;
        } else if (dire == 'W') {
            x += dx[1]*diff;
            y += dy[1]*diff;
        } else {
            x += dx[2]*diff;
            y += dy[2]*diff;
        }
    }

    cout << x << " " << y;
    return 0;
}