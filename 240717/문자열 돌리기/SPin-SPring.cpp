#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;
    int L = A.length();

    cout << A << endl;
    for (int i = 0; i < L; i++) {
        A = A.substr(L-1, 1) + A.substr(0, L-1);
        cout << A << endl;
    }

    return 0;
}