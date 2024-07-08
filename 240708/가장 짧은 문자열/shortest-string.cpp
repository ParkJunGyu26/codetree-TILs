#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[3];
    int max = 0, min = 21;

    cin >> str[0] >> str[1] >> str[2];

    for (int i = 0; i < 3; i++) {
        if (str[i].length() > max) max = str[i].length();
        if (str[i].length() < min) min = str[i].length();
    }

    cout << max - min;

    return 0;
}