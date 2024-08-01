#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_SIZE 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n, A[MAX_SIZE];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A, A+n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) cout << A[i/2] << " ";
    }
    return 0;
}