#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[2][4];

    double row[4]; // 세로
    double col[2]; // 가로

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) 
            cin >> num[i][j];
    }

    int total = 0;
    // 가로
    for (int i = 0; i < 2; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += num[i][j];
        }
        col[i] = (double) (sum / (double) 4);
        total += sum;
    }

    // 세로
    for (int j = 0; j < 4; j++) {
        int sum = 0;
        for (int i = 0; i < 2; i++) {
            sum += num[i][j];
        }
        row[j] = (double) (sum / (double) 2);
    }

    int sum = 0;
    for (int i = 0; i < 2; i++) 
        printf("%.1f ", col[i]);
    cout << endl;

    for (int i = 0; i < 4; i++)
        printf("%.1f ", row[i]);
    cout << endl;

    printf("%.1f", total / (double) 8);

    return 0;
}