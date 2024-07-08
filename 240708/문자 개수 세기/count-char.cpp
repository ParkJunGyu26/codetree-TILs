#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    getline(cin, str);

    char ch;
    cin >> ch;
    int ans = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) ans++;
    }

    cout << ans;
    return 0;
}