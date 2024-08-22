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

    int cnt, ans;
    cnt = ans = 1;

    for (int i = 0; i < n-1; i++) {
        if (num[i] < num[i+1]) cnt++;
        else cnt = 1;

        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}