#include <iostream>
using namespace std;

int n;

void printNum(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNum(n-1);
    cout << n << " ";
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    printNum(n);
    return 0;
}