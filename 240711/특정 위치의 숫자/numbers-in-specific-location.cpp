#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[10];

    for (int i = 0; i < 10; i++)
        cin >> num[i];

    cout << num[2] + num[4] + num[9];
    return 0;
}