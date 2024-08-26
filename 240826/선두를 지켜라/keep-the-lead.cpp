#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int A[1000001] = {0};
    int B[1000001] = {0};

    int cnt = 0;
    int time = 1;
    for (int i = 0; i < n; i++) {
        // v 는 이동 거리, t 는 이동 시간
        int v, t;
        cin >> v >> t;

        for (int j = time; j < time + t; j++) {
            cnt += v;
            A[j] = cnt;
        }
        time += t;
    }

    cnt = 0;
    time = 1;
    for (int i = 0; i < m; i++) {
        // v 는 이동 거리, t 는 이동 시간
        int v, t;
        cin >> v >> t;

        for (int j = time; j < time + t; j++) {
            cnt += v;
            B[j] = cnt;
        }
        time += t;
    }

    char ans[1000001];
    for (int i = 0; i < time; i++) {
        if (A[i] > B[i]) ans[i] = 'A';
        if (A[i] < B[i]) ans[i] = 'B';
        if (A[i] == B[i]) ans[i] = 'S';
    }

    int answer = 0;
    char check;
    for (int i = 1; i < time; i++) {
        if (ans[i] == 'S') continue;

        if (ans[i] == 'A') {
            if (check == 'B') answer++;
            check = 'A';
        }
        else {
            if (check == 'A') answer++;
            check = 'B';
        }
    }

    cout << answer;

    return 0;
}