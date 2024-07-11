#include <iostream>
using namespace std;

int duplicate(int now, int* num) {
    for (int i = 0; i < now; i++) {
        if (num[i] == num[now]) return 0;
    }
    return 1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    int num[1000];
    for (int i = 0; i < N; i++)
        cin >> num[i];
    
    int ans[1000] = {0};
    int MAX = num[0];
    int index = 0;
    for (int i = 1; i < N; i++) {
        if (MAX < num[i] && duplicate(i, num)) {
            ans[index] = i+1;
            index++;
            MAX = num[i];
        }
    }

    for (int i = 999; i >= 0; i--) {
        if (ans[i] != 0) cout << ans[i] << " ";
    }
    cout << 1;


    return 0;
}