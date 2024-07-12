#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string input, check;

    cin >> input >> check;

    int cnt = 0;
    if (input.find(check)) cnt++;

    if (cnt == 0) cout << -1;
    else cout << cnt;
    return 0;
}