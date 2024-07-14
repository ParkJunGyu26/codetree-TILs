#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    char a;
    cin >> A >> a;

    int index = -1;
    for (int i = 0; i < A.length(); i++) {
        if (A[i] == a) {
            index = i;
            break;
        }
    }

    if (index == -1) cout << "No";
    else cout << index;
 
    return 0;
}