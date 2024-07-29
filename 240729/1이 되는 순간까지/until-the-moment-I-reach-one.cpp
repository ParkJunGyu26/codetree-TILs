#include <iostream>
using namespace std;

int n;

int recur(int num, int count) {
    if (num == 1) return count;
    
    if (num % 2 == 0) return recur(num / 2, count + 1);
    return recur(num / 3, count + 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int ans = recur(n, 0);
    cout << ans;
    return 0;
}