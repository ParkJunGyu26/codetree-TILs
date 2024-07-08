#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    for (auto s : str1) if (s != ' ') cout << s;
    for (auto s : str2) if (s != ' ') cout << s;
    return 0;
}