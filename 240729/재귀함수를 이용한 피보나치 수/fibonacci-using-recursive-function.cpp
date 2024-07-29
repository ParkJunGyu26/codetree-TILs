#include <iostream>
using namespace std;

int n;

int fibo(int num) {
    if (num == 1 || num == 2) return 1;
    return fibo(num-1) + fibo(num-2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    cout << fibo(n);
    return 0;
}