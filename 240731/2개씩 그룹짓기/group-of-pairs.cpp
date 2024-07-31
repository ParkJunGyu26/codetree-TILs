#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_SIZE 1001

int n, A[MAX_SIZE];
int total;
int cnt;
int target;
int ans = 1000;

void recur(int index) {
    if (cnt == 2) {
        int opposite = total - target;
        ans = min(ans, max(opposite, target));
        return;
    }

    for (int i = index; i < n*2; i++) {
        cnt++;
        target += A[i];
        recur(index+1);
        cnt--;
        target -= A[i];
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < 2*n; i++) {
        cin >> A[i];
        total += A[i];
    }
    
    recur(0);
    cout << ans;

    return 0;
}