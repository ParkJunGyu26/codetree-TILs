#include <iostream>
using namespace std;

int n;

int fact(int num) {
    if (num <= 1) return 1;
    return num * fact(num-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    cout << fact(n);
    return 0;
}