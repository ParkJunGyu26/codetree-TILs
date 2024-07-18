#include <iostream>
using namespace std;

void Print1(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) cout << 1;
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    Print1(n, m);
    return 0;
}