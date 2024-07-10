#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int sub[4];
        int total = 0;
        for (int j = 0; j < 4; j++) {
            cin >> sub[j];
            total += sub[j];
        }
        int average = total / 4;
        
        if (average >= 60) {
            cout << "pass" << endl;
            cnt++;
        } else {
            cout << "fail" << endl;
        }
    }

    cout << cnt;

    return 0;
}