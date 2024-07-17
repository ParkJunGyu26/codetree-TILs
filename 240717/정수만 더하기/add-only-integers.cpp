#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    int cnt = 0;
    for (int i = 0; i < A.size(); i++) {
        if ('0' <= A[i] && A[i] <= '9') cnt += A[i] - '0';
    }

    cout << cnt;
    return 0;
}