#include <iostream>
using namespace std;

int max(int a, int b) {
    if (a >= b) return a;
    return b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int num[1000];
    for (int i = 0; i < n; i++)
        cin >> num[i];

    int answer = 0;
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (num[i-1] == num[i]) cnt++;
        else {
            answer = max(cnt, answer);
        }
    }

    cout << answer;
    return 0;
}