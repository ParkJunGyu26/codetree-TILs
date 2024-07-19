#include <iostream>
using namespace std;

void season(int M) {
    switch(M) 
    {
        case 1: case 2: case 12:
            cout << "Winter";
            break;
        case 3: case 4: case 5:
            cout << "Spring";
            break;
        case 6: case 7: case 8:
            cout << "Summer";
            break;
        case 9: case 10: case 11:
            cout << "Fall";
            break;
    }
}

bool exist(bool yoon, int M, int D) {
    if ((M == 1) || (M == 3) || (M == 5) || (M == 7) || (M == 8) || (M == 10) || (M == 12))
        return D <= 31;
    else if ((M == 4) || (M == 6) || (M == 9) || (M == 11)) 
        return D <= 30;
    else if (M == 2) {
        if (yoon) return D <= 28;
        return D <= 29;
    }
    return false;
}

bool YoonCheck(int Y) {
    if (Y % 4 == 0) {
        if (Y % 100 != 0) return false;
        else {
            if (Y % 400 == 0) return true;
            return true;
        }
    } else return false;
}

void check(int Y, int M, int D) {
    if(YoonCheck(Y)) {
        if (exist(YoonCheck(Y), M, D)) {
            season(M);
        } else cout << -1;
    } else {
        if (exist(YoonCheck(Y), M, D)) {
            season(M);
        } else cout << -1;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int Y, M, D;
    cin >> Y >> M >> D;

    check(Y, M, D);
    return 0;
}