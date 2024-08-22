#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;

    int num[1000];
    for (int i = 0; i < n; i++)
        cin >> num[i];

    int ans, cnt;
    ans = cnt = 0;

    for (int i = 0; i < n; i++) {
        if (num[i] <= t) cnt = 0;
        else cnt++;
        
        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}