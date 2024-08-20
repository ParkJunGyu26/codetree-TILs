#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int rec[201][201] = {0};

    // 빨간색은 1, 파란색은 -1
    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int y = y1; y < y2; y++) {
            for (int x = x1; x < x2; x++) {
                if (i % 2 == 0) rec[y+100][x+100] = 1;
                else rec[y+100][x+100] = -1;
            }
        }
    }

    int answer = 0;
    for (int y = 0; y < 201; y++) {
        for (int x = 0; x < 201; x++) {
            if (rec[y][x] == -1) answer++;
        }
    }

    cout << answer;
    return 0;
}