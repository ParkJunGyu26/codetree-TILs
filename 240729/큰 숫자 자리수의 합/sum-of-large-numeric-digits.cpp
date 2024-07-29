#include <iostream>
using namespace std;

int a, b, c;

int solution(int num) {
    if (num == 0) return 0;
    return (num % 10) + solution(num/10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a >> b >> c;
    int num = a*b*c;

    cout << solution(num);
    return 0;
}