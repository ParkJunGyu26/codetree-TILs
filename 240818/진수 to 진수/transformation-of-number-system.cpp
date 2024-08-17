#include <iostream>
using namespace std;

int main() {
    // n은 a진수로 나타낸 수이다. 이를 십진수로 바꾸고, 다시 b진수로 바꾼 값을 출력
    int a, b;
    string n;
    cin >> a >> b >> n;

    int now = 1;
    int change = 0; // 십진수로 바뀔 수

    for (int i = n.size()-1; i >= 0; i--) {
        if (n[i] != '0') {
            change += (n[i] - '0')*now;
        }
        now *= a;
    }

    int answer[100];

    int cnt = 0;
    while (true) {

        if (change < b) {
            answer[cnt++] = change;
            break;
        }

        answer[cnt++] = change % b;
        change /= b;
    }

    for (int i = cnt-1; i >= 0; i--) {
        cout << answer[i];
    }
    return 0;
}