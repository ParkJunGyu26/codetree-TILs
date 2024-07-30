#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string A;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> A;
    sort(A.begin(), A.end());
    cout << A;
    return 0;
}