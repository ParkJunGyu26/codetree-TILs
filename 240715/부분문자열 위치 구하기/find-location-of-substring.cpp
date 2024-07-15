#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string N, M;
    cin >> N >> M;
    int ans = -1;

    for (int i = 0; i <= N.length() - M.length(); i++) {
        string target = "";
        for (int j = i; j < i + M.length(); j++) target += N[j];
        if (target == M) {
            ans = i;
            break;
        }
    }

    if (ans == -1) cout << -1;
    else cout << ans;

    return 0;
}