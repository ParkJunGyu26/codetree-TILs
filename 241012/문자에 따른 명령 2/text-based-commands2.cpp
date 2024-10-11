#include <iostream>
#include <string>
using namespace std;

// 북 동 서 남
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y;
    x = y = 0;

    string s;
    cin >> s;

    int nowIndex = 0;
    for (auto c : s) {
        if (c == 'L') nowIndex = (nowIndex + 3) % 4;
        if (c == 'R') nowIndex = (nowIndex + 1) % 4;
        if (c == 'F') {
            x += dx[nowIndex];
            y += dy[nowIndex];
        }
    }

    cout << x << " " << y;
    return 0;
}