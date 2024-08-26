#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, k;
    cin >> n >> m >> k;

    int student[101] = {0};
    int answer = -1;

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        student[num]++;

        if (student[num] == k && answer == -1) answer = num;
    }

    cout << answer;
    return 0;
}