#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    int num[100][100] = {};

    cin >> n >> m;
    
    int target = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            num[i][j] = target;
            target++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}