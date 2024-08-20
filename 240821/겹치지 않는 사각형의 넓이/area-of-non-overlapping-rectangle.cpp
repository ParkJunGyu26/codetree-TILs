#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int rec1[2001][2001] = {0}; // A, B는 1 M은 -1
    int x1, y1, x2, y2;

    for (int i = 0; i < 2; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        for (int y = y1; y < y2; y++) {
            for (int x = x1; x < x2; x++) {
                rec1[y+1000][x+1000] = 1;
            }
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    
    int rec2[2001][2001] = {0}; // A, B는 1 M은 -1
    for (int y = y1; y < y2; y++) {
        for (int x = x1; x < x2; x++) {
            rec2[y+1000][x+1000] = -1;
        }
    }

    int answer = 0;

    for (int y = 0; y < 2001; y++) {
        for (int x = 0; x < 2001; x++) {
            if (rec1[y][x] == 1 && rec2[y][x] != -1) answer++;
        }
    }

    cout << answer;
    
    return 0;
}