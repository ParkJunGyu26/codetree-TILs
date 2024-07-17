#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    int cnt = 1;
    string ans = "";
    for (int i = 0; i < A.length(); i++) {
        if (A[i] == 'e' && cnt > 0) {
            cnt--;
            continue;
        }
        ans += A[i];
    }

    cout << ans;

    return 0;
}