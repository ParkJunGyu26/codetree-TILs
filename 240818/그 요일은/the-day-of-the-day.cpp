#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;
    string A;

    int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fir", "Sat", "Sun"};

    cin >> m1 >> d1 >> m2 >> d2 >> A;
    int before, after;
    before = after = 0;

    for (int i = 1; i < m1; i++)
        before += month[i];
    before += d1;

    for (int i = 1; i < m2; i++) 
        after += month[i];
    after += d2;

    int index = 0;
    for (int i = 0; i < 7; i++) {
        if (A == days[i]) {
            index = i;
            break;
        }
    }

    int answer = 0;

    int target = after - before;

    while (target >= 7) {
        answer++;
        target -= 7;
    }

    if (target >= index) answer++;
    cout << answer;
    return 0;
}