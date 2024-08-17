#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int answer = 0;
    for (int i = 1; i < m2; i++) {
        answer += days[i];
    }
    answer += d2;

    for (int i = 1; i < m1; i++) {
        answer -= days[i];
    }
    answer -= d1;

    cout << answer+1;
    return 0;
}