#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int A[2000001] = {0};
    int B[2000001] = {0};

    int now = 1000000;
    int time = 0;
    for (int i = 0; i < n; i++) {
        int t;
        char d;
        cin >> t >> d;

        if (d == 'R') {
            for (int j = now; j < now+t; j++) 
                A[time++] = j;
            now += t;
        } else {
            for (int j = now; j > now-t; j--)
                A[time++] = j;
            now -= t;
        }
    }

    for (int i = time; i < 2000001; i++)
        A[i] = now;

    now = 1000000;
    time = 0;
    for (int i = 0; i < m; i++) {
        int t;
        char d;
        cin >> t >> d;

        if (d == 'R') {
            for (int j = now; j < now+t; j++) 
                B[time++] = j;
            now += t;
        } else {
            for (int j = now; j > now-t; j--)
                B[time++] = j;
            now -= t;
        }
    }

    for (int i = time; i < 2000001; i++)
        B[i] = now;

    int answer[2000001] = {0};
    for (int i = 1; i <= time; i++)
        if (A[i] == B[i]) answer[i] = i;
    
    int target = 0;
    int ans = 0;
    for (int i = 1; i <= time; i++) {
        if (target == 0 && answer[i] != 0) ans++;

        if (answer[i] == 0) target = 0;
        else target = answer[i];
    }

    cout << ans;

    return 0;
}