#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char alpha;
    cin >> alpha;

    int ans = (int) alpha - 1;
    if (ans == 96) cout << 'z';
    else cout << (char)ans;

    return 0;
}