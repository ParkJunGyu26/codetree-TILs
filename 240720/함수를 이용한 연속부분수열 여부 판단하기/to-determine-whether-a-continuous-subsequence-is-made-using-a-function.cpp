#include <iostream>
using namespace std;

bool check(int index, int *A, int *B, int size) {
    for (int i = 0; i < size; i++) {
        if (A[index + i] != B[i]) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    
    int A[100] = {0}, B[100] = {0};
    for (int i = 0; i < n1; i++) cin >> A[i];
    for (int i = 0; i < n2; i++) cin >> B[i];

    int ans = 0;
    for (int i = 0; i <= n1-n2; i++) {
        if(check(i, A, B, n2)) {
            ans = 1;
            break;
        }
    }

    if (ans == 1) cout << "Yes";
    else cout << "No";

    return 0;
}