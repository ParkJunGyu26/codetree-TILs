#include <iostream>
using namespace std;

int n;
int ans[21];

int solution(int index) {
    if (index == n) return ans[n];
    return solution(index+1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    ans[1] = 2;
    ans[2] = 4;
    for (int i = 3; i < 21; i++)
        ans[i] = (ans[i-1] * ans[i-2]) % 100;

    cin >> n;
    cout << solution(1);
    
    return 0;
}