#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num[10];
    int cnt = 10;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n == 0) {
            cnt = i;
            break;
        }
        num[i] = n;
    }

    for (int i = cnt-1; i >= 0; i--) cout << num[i] << " ";

    return 0;
}