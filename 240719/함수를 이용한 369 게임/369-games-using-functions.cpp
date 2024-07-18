#include <iostream>
#include <string>
using namespace std;

bool numCheck(int num) {
    string number = to_string(num);
    for (int i = 0; i < number.size(); i++) {
        if (number[i]-'0' == 3 || number[i]-'0' == 6 || number[i]-'0' == 9) return true;
    }
    return false;
}

bool check(int num) {
    return num % 3 == 0 || numCheck(num);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    
    int ans = 0;
    for (int i = a; i <= b; i++) {
        if (check(i)) ans++;
    }

    cout << ans;

    return 0;
}