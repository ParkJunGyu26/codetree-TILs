#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int day1, day2;
    day1 = day2 = 0;
    for (int i = 1; i < m1; i++) day1 += month[i];
    day1 += d1;

    for (int i = 1; i < m2; i++) day2 += month[i];
    day2 += d2;

    if (day2-day1 >= 0) cout << days[(day2-day1)%7];
    else {
        int target = -((day2-day1)/7)+1;
        cout << days[(day2-day1+7*target)%7];
    }
    return 0;
}