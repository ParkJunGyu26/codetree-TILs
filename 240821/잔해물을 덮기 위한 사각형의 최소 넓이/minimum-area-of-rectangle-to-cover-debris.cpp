#include <iostream>
using namespace std;

int max(int a, int b) {
    if (a >= b) return a;
    return b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int rec1[2001][2001] = {0}; // 1이면 첫 번째, -1이면 두 번째 사각형
    int rec2[2001][2001] = {0}; // 1이면 첫 번째, -1이면 두 번째 사각형
    int x1, y1, x2, y2;

    // 첫 번째 사각형
    cin >> x1 >> y1 >> x2 >> y2;
    for (int y = y1; y < y2; y++) {
        for (int x = x1; x < x2; x++) {
            rec1[y+1000][x+1000] = 1;
        }
    }

    // 두 번째 사각형
    cin >> x1 >> y1 >> x2 >> y2;
    for (int y = y1; y < y2; y++) {
        for (int x = x1; x < x2; x++) {
            rec2[y+1000][x+1000] = -1;
        }
    }

    int answer_x, answer_y;
    answer_x = answer_y = 0;

    for (int y = 0; y < 2001; y++) {
        bool target_y = false;
        int target_x = 0;
        for (int x = 0; x < 2001; x++) {
            if (rec1[y][x] == 1 && rec2[y][x] != -1) {
                target_y = true;
                target_x++;
            }
        }
        if (target_y) answer_y++;
        answer_x = max(answer_x, target_x);
    }

    cout << answer_x * answer_y;

    return 0;
}