#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    for (int i = 0; i < A.size(); i++) {
        if ('a' <= A[i] && A[i] <= 'z') cout << (char) (A[i] + ('A' - 'a'));
        else cout << (char) (A[i] - 'A' + 'a');
    }

    return 0;
}