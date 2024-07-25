#include <iostream>
using namespace std;

int n;

void printNum1(int n) {
    if (n == 0) return;
    printNum1(n-1);
    cout << n << " ";
}

void printNum2(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNum2(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    printNum1(n);
    cout << endl;
    printNum2(n);
    return 0;
}