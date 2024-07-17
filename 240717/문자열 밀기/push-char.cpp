#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    cout << A.substr(1, A.length()-1) + A.substr(0, 1);

    return 0;
}