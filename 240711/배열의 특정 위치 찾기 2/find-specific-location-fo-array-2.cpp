#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[10];
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 10; i++) {
        cin >> num[i];
        if (i % 2 == 0) odd += num[i];
        else even += num[i];
    }

    if (even >= odd) cout << even - odd;
    else cout << odd - even;
    return 0;
}