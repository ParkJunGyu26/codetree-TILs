#include <iostream>
using namespace std;

void PrintRect(int n) {
    int out = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (out > 9) out = 1;
            cout << out << " ";
            out++;
        }
        cout << endl;
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    PrintRect(n);
    return 0;
}