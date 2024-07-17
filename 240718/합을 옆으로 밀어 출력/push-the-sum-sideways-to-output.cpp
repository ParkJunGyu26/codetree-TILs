#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int ans = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        ans += num;
    }

    string answer = to_string(ans);
    answer = answer.substr(1, answer.size()-1) + answer.substr(0, 1);
    cout << answer;

    return 0;
}