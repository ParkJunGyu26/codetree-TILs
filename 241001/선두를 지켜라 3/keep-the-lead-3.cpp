#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> A;
    vector<int> B;
    A.push_back(0);
    B.push_back(0);

    int v, t;
    int now = 0;
    for (int i = 0; i < n; i++) {
        cin >> v >> t;

        while (t) {
            now += v;
            A.push_back(now);
            t--;
        }
    }

    now = 0;
    for (int i = 0; i < m; i++) {
        cin >> v >> t;

        while (t) {
            now += v;
            B.push_back(now);
            t--;
        }
    }

    char winner = 'c';

    int ans = 0;
    for (int t = 1; t < A.size(); t++) {
        if (winner != 'c' && A[t] == B[t]) {
            winner = 'c';
            ans++;
        }
        if ((winner == 'c' || winner == 'b') && A[t] > B[t]) {
            ans++;
            winner = 'a';
        }
        if ((winner == 'c' || winner == 'a') && A[t] < B[t]) {
            ans++;
            winner = 'b';
        }
    }

    cout << ans;

    return 0;
}