#include <iostream>
using namespace std;

int n;

int solution(int num) {
    if (num == 1) return 1;
    if (num == 2) return 2;
    
    return solution(num / 3) + solution(num - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    cout << solution(n);
    return 0;
}