#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string A;
    cin >> n >> A;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        string target;
        cin >> target;
        if (target == A) ans++;
    }
    cout << ans;
    return 0;
}