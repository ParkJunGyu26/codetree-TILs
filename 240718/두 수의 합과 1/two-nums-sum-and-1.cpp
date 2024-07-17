#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int c = a+b;
    string num = to_string(c);
    int ans = 0;
    for (int i = 0; i < num.size(); i++) {
        if (num[i] == '1') ans++;
    }
    cout << ans;
    return 0;
}