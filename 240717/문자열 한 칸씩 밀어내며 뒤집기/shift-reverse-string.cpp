#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    int q, num;
    cin >> A >> q;

    int L = A.length();
    for (int i = 0; i < q; i++) {
        cin >> num;
        if (num == 1) {
            A = A.substr(1, L-1) + A.substr(0, 1);
        } else if (num == 2) {
            A = A.substr(L-1, 1) + A.substr(0, L-1);
        } else {
            reverse(A.begin(), A.end());
        }
        cout << A << endl;
    }

    return 0;
}