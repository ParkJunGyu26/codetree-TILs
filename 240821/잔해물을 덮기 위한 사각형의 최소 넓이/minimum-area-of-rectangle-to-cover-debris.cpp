#include <iostream>
using namespace std;

int max(int a, int b) {
    if (a >= b) return a;
    return b;
}

int min(int a, int b) {
    if (a >= b) return b;
    return a;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int rec1[2001][2001] = {0}; // 1이면 첫 번째, -1이면 두 번째 사각형
    int rec2[2001][2001] = {0}; // 1이면 첫 번째, -1이면 두 번째 사각형
    int x1, y1, x2, y2;

    // 첫 번째 사각형
    cin >> x1 >> y1 >> x2 >> y2;
    for (int y = y1; y <= y2; y++) {
        for (int x = x1; x <= x2; x++) {
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

    int min_x, max_x, min_y, max_y;
    max_x = max_y = 0;
    min_x = min_y = 2000;

    bool check = false;
    for (int y = 0; y < 2001; y++) {
        for (int x = 0; x < 2001; x++) {
            if (rec1[y][x] == 1 && rec2[y][x] != -1) {
                check = true;
                max_x = max(x, max_x);
                max_y = max(y, max_y);
                min_x = min(x, min_x);
                min_y = min(y, min_y);
            }
        }
    }

    // cout << "max x : " << max_x << endl;
    // cout << "min x : " << min_x << endl;
    // cout << "max y : " << max_y << endl;
    // cout << "min y : " << min_y << endl;

    if (check) cout << (max_x - min_x) * (max_y - min_y);
    else cout << 0;

    return 0;
}