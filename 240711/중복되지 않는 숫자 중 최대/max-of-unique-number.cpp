#include <iostream>
using namespace std;

bool dulplicate(int index, int number, int *num, int size) {
    for (int i = 0; i < size; i++) {
        if (i == index) continue;
        if (number == num[i]) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int num[1000];
    for (int i = 0; i < n; i++)
        cin >> num[i];
    
    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (dulplicate(i, num[i], num, n)) {
            if (ans < num[i]) ans = num[i];
        }
    }

    cout << ans;

    return 0;
}