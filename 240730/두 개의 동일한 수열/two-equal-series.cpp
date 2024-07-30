#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_SIZE 101
int n, A[MAX_SIZE], B[MAX_SIZE];
bool check;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];
    sort(A, A+n);
    sort(B, B+n);

    for (int i = 0; i < n; i++) {
        if (A[i] != B[i]) {
            check = true;
            break;
        }
    }
    if (check) cout << "No";
    else cout << "Yes";
    return 0;
}