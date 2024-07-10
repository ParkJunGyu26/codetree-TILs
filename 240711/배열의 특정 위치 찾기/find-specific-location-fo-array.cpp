#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[10];

    int sum = 0;
    int total = 0;
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> num[i];
        if (i % 2 == 1) sum += num[i];
        if (i % 3 == 2) {
            total += num[i];
            cnt++;
        }
    }

    printf("%d %.1f", sum, total/(double)cnt);

    return 0;
}