#include <iostream>
#include <string>
using namespace std;

//          북  동  남  서
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int dir = 0;
    int time = 0;
    int answer = -1;

    int x, y;
    x = y = 0;

    string N;
    cin >> N;
    for (int i = 0; i < N.size(); i++) {
        if (answer != -1) break;

        time++;
        if (N[i] == 'F') {
            x += dx[dir];
            y += dy[dir];

            if (x == 0 && y == 0) answer = time;
        } 
        else if (N[i] == 'L') dir = (dir + 3) % 4;
        else if (N[i] == 'R') dir = (dir + 1) % 4;
    }

    cout << answer;

    return 0;
}