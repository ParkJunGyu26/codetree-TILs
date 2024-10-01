#include <iostream>

#define MAX_SIZE 2000001

using namespace std;

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
    int time = 1;
    for (int i = 0; i < n; i++) {
        cin >> t >> d;

        if (d == 'L') {
            while (t) {
                t--;
                A[time++] = --now;
            }
        } else {
            while (t) {
                t--;
                A[time++] = ++now;
            }
        }
    }

    now = 1000000;
    time = 1;
    for (int i = 0; i < m; i++) {
        cin >> t >> d;

        if (d == 'L') {
            while (t) {
                t--;
                B[time++] = --now;
            }
        } else {
            while (t) {
                t--;
                B[time++] = ++now;
            }
        }
    }

    int ans = 0;
    for (int t = 2; t <= time; t++)
        if (A[t-1] != B[t-1] && A[t] == B[t]) ans++;

    cout << ans;

    return 0;
}