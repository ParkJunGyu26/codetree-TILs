#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int rec[201][201] = {0};
    for (int i = 0; i < n; i++) {
        int x1, y1;
        cin >> x1 >> y1;

        for (int y = y1; y < y1+8; y++) {
            for (int x = x1; x < x1+8; x++) {
                rec[y+100][x+100] = 1;
            }
        }
    }

    int answer = 0;
    for (int y = 0; y < 201; y++) {
        for (int x = 0; x < 201; x++) {
            if (rec[y][x] == 1) answer++;
        }
    }

    cout << answer;
    return 0;
}