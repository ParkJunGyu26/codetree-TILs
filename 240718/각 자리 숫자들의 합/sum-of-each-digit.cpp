#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string num = to_string(n);
    int ans = 0;
    for (int i = 0; i < num.size(); i++) {
        ans += (int) (num[i] - '0');
    }
    cout << ans;
    return 0;
}