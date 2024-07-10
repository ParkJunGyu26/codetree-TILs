#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    char chr[10];

    for (int i = 0; i < 10; i++)
        cin >> chr[i];

    cout << chr[1] << " " << chr[4] << " " << chr[7];
    return 0;
}