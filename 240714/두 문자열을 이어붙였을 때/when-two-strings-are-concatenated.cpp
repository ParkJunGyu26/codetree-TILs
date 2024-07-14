#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A, B, C, D;
    cin >> A >> B;
    C = A + B;
    D = B + A;

    bool ans = (C == D);
    cout << boolalpha;
    cout << ans;

    return 0;
}