#include <iostream>
using namespace std;

int n;

int solution(int num) {
    if (num <= 0) return 0;
    return num + solution(num-2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    cout << solution(n);
    return 0;
}