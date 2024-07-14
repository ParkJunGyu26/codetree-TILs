#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A, ans;
    cin >> A;

    ans = A[0];
    char now = A[0];
    int cnt = 1;
    for (int i = 1; i < A.length(); i++) {
        if (A[i] == now) {
            cnt++;
        } else {
            now = A[i];
            ans += to_string(cnt);
            cnt = 1;
            ans += now;
        }
    }
    ans += to_string(cnt);

    cout << ans.length() << endl;
    cout << ans;

    return 0;
}