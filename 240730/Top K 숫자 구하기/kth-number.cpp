#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_SIZE 1001

int main() {
    // 여기에 코드를 작성해주세요.
    int k, N;
    int A[MAX_SIZE];

    cin >> N >> k;
    for (int i = 0; i < N; i++) cin >> A[i];
    sort(A, A+N);
    cout << A[k-1];
    return 0;
}