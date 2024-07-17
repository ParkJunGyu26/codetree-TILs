#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    for (int i = 0; i < A.size(); i++) {
        if (isalpha(A[i])) {
            cout << (char)tolower(A[i]);
        } else if (isdigit(A[i])) {
            cout << A[i];
        }
    }

    return 0;
}