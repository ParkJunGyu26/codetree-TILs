#include <iostream>
using namespace std;

int abs(int a, int b) {
    if (a >= b) return a-b;
    return b-a;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int num[10];
    for (int i = 0; i < n; i++)
        cin >> num[i];

    int ans = 100;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int diff = abs(num[i], num[j]);
            if (ans > diff) ans = diff;
        }
    }

    cout << ans;

    return 0;
}