#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    string Q;

    cin >> A >> Q;

    int A_L = A.size();

    for (int i = 0; i < Q.size(); i++) {
        if (Q[i] == 'L') {
            A = A.substr(1, A_L-1) + A.substr(0, 1);
        } else {
            A = A.substr(A_L-1, 1) + A.substr(0, A_L-1);
        }
    }

    cout << A;
    
    return 0;
}