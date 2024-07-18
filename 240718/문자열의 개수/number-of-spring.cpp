#include <iostream>
#include <string>
using namespace std;

string A[200];
int main() {
    // 여기에 코드를 작성해주세요.
    int i = 0;

    while (true) {
        cin >> A[i];
        if (A[i] == "0") break;
        i++;
    }

    cout << i << endl;
    for (int j = 0; j < i; j++) if (j % 2 == 0) cout << A[j] << endl;

    return 0;
}