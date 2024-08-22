#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int num[1000];
    for (int i = 0; i < n; i++)
        cin >> num[i];

    int ans = 1;
    int target = num[0];
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (target * num[i] > 0) cnt++;
        else {
            ans = max(ans, cnt);
            target = num[i];
            cnt = 1;
        }
        if (i == n-1) ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}