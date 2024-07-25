#include <iostream>
using namespace std;

#define MAX_SIZE 100

int n, m, a1, a2;
int A[MAX_SIZE+1];

int sum(int a1, int a2) {
    int ans = 0;
    for (int i = a1-1; i < a2; i++) ans += A[i];
    return ans;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < m; i++) {
        cin >> a1 >> a2;
        cout << sum(a1, a2) << endl;
    }
    return 0;
}