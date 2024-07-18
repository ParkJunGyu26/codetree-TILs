#include <iostream>
#include <string>
using namespace std;

string A, B;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> A >> B;

    int n = 0;
    
    while (A != B) {
        A = A.substr(A.size()-1, 1) + A.substr(0, A.size()-1);
        n++;
    }

    cout << n;

    return 0;
}