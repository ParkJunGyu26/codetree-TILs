#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[5] = {  "apple", "banana", "grape", "blueberry", "orange" };
    char a;
    cin >> a;

    int cnt = 0;
    for (auto A : str) {
        if (A[2] == a || A[3] == a) {
            cnt++;
            cout << A << endl;
        }
    }
    cout << cnt;
    return 0;
}