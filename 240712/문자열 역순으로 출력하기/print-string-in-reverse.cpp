#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A[4];
    for (int i = 0; i < 4; i++)
        cin >> A[i];
    
    for (int i = 3; i >= 0; i--)
        cout << A[i] << endl;

    return 0;
}