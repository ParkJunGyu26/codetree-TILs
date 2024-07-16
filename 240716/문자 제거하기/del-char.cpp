#include <iostream>
#include <string>
using namespace std;

int maxIndex(int length, int index) {
    if (index >= length) return length-1;
    return index;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    while (A.length() > 1) {
        int index;
        cin >> index;
        index = maxIndex(A.length(), index);
        A = A.substr(0, index) + A.substr(index+1);
        cout << A << endl;
    }

    return 0;
}