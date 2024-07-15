#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    A = A.substr(0, 1) + A.substr(2);
    A = A.substr(0, A.length()-2) + A.substr(A.length()-1);
    cout << A;
    return 0;
}