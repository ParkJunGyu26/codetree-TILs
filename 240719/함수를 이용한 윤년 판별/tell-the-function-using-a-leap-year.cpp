#include <iostream>
using namespace std;

bool check(int y) {
    if (y % 100 == 0 && y % 400 != 0) return false;
    if (y % 4 == 0) return true;
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;
    if (check(y)) cout << "true";
    else cout << "false";
    return 0;
}