#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A[10];
    char a;

    for (int i = 0; i < 10; i++)
        cin >> A[i];

    cin >> a;

    for (auto aa : A) {
        if (aa[aa.length()-1] == a) cout << aa << endl;
    }

    return 0;
}