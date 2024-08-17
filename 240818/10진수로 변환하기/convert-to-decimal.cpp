#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string num;
    cin >> num;

    int answer = 0;
    int now = 1;
    for (int i = num.size()-1; i >= 0; i--) {
        if (num[i] == '1') {
            answer += now;
        }
        now *= 2;
    }
    cout << answer;
    return 0;
}