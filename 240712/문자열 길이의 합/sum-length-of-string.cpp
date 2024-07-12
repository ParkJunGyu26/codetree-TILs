#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string A;
        cin >> A;
        cnt += A.length();
        bool check = false;
        if (A[0] == 'a') ans++;
    }

    cout << cnt << " " << ans;
    return 0;
}