#include <iostream>
#include <tuple>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, now, time;
    cin >> n >> m;

    int A[2000001], B[2000001];
    for (int i = 0; i < 2000001; i++) {
        A[i] = -1;
        B[i] = -1;
    }

    time = 0;
    now = 1000000;
    for (int i = 0; i < n; i++) {
        char d;
        int c;

        cin >> d >> c;
        
        if (d == 'R') {
            for (int t = time; t < time+c; t++)
                A[t] = now++;
        } else {
            for (int t = time; t < time+c; t++)
                A[t] = now--;
        }
        time += c;
    }

    time = 0;
    now = 1000000;
    for (int i = 0; i < m; i++) {
        char d;
        int c;

        cin >> d >> c;
        
        if (d == 'R') {
            for (int t = time; t < time+c; t++)
                B[t] = now++;
        } else {
            for (int t = time; t < time+c; t++)
                B[t] = now--;
        }
        time += c;
    }

    bool check = false;
    int ans = 0;
    for (int i = 1; i < time; i++) {
        if (A[i] == B[i]) {
            ans = i;
            check = true;
            break;
        }
    }

    if (check) cout << ans;
    else cout << -1;

    return 0;
}