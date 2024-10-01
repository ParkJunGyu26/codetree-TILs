#include <iostream>

#define MAX_SIZE 2000001

using namespace std;

int max(int a, int b) {
    if (a > b) return a;
    return b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int A[MAX_SIZE], B[MAX_SIZE];

    int t;
    char d;
    int now = 1000000;
    int time1 = 1;
    for (int i = 0; i < n; i++) {
        cin >> t >> d;

        if (d == 'L') {
            while (t) {
                t--;
                A[time1++] = --now;
            }
        } else {
            while (t) {
                t--;
                A[time1++] = ++now;
            }
        }
    }

    now = 1000000;
    int time2 = 1;
    for (int i = 0; i < m; i++) {
        cin >> t >> d;

        if (d == 'L') {
            while (t) {
                t--;
                B[time2++] = --now;
            }
        } else {
            while (t) {
                t--;
                B[time2++] = ++now;
            }
        }
    }

    // A가 더 오래 움직인 경우
    if (time1 > time2) {
        for (int t = time2; t < time1; t++)
            B[t] = B[time2-1];
    } else {
        for (int t = time1; t < time2; t++)
            A[t] = A[time1-1];
    }

    int time = max(time1, time2);
    
    int ans = 0;
    for (int t = 2; t < time; t++)
        if (A[t-1] != B[t-1] && A[t] == B[t]) ans++;

    cout << ans;

    return 0;
}