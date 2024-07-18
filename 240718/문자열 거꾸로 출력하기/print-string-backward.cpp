#include <iostream>
#include <string>
using namespace std;

string A;
int main() {
    // 여기에 코드를 작성해주세요.
    while (true) {
        cin >> A;
        if (A == "END") break;

        for (int i = A.size()-1; i >= 0; i--) {
            cout << A[i];
        }
        cout << endl;
    }

    return 0;
}