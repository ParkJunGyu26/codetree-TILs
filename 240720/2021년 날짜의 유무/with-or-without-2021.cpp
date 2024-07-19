#include <iostream>
using namespace std;

bool check(int M, int D) {
    switch (M)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (1 <= D && D <= 31) return true;
        case 4: case 6: case 9: case 11:
            if (1 <= D && D <= 30) return true;
        case 2:
            if (1 <= D && D <= 28) return true;
        default:
            return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int M, D;
    cin >> M >> D;
    if (check(M, D)) cout << "Yes";
    else cout << "No";
    return 0;
}