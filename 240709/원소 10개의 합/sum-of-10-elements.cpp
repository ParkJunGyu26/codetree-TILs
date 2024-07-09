#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int A[10];

    for (int i = 0; i < 10; i++) cin >> A[i];

    int ans = 0;
    for (int i = 0; i < 10; i++) ans += A[i];

    cout << ans;

    return 0;
}