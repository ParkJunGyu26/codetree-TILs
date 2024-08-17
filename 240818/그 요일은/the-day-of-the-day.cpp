#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;
    string A;

    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cin >> m1 >> d1 >> m2 >> d2 >> A;
    int before, after;
    before = after = 0;

    for (int i = 1; i < m1; i++)
        before += month[i];
    before += d1;

    for (int i = 1; i < m2; i++) 
        after += month[i];
    after += d2;

    int answer = ((after - before) / 7) + 1;

    cout << answer;
    return 0;
}