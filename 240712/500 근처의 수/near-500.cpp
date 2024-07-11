#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int MIN = 1000;
    int MAX = 1000;
    int num[10];

    for (int i = 0; i < 10; i++)
        cin >> num[i];

    int min_ans = 0;
    int max_ans = 0;
    for (int i = 0; i < 10; i++) {
        if (num[i] < 500) {
            if (500 - num[i] < MIN) {
                MIN = 500 - num[i];
                min_ans = num[i];
            } 
        } else {
            if (num[i] - 500 < MAX) {
                MAX = 500 - num[i];
                max_ans = num[i];
            }
        }
    }

    cout << min_ans << " " << max_ans;
    return 0;
}