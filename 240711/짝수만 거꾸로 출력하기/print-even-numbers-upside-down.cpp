#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num[100];
    int even[50] = {0};

    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        if (num[i] % 2 == 0) {
            even[cnt] = num[i];
            cnt++;
        }
    }

    for (int i = cnt-1; i >= 0; i--) cout << even[i] << " ";
    return 0;
}