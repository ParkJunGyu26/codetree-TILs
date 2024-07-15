#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A, B;
    cin >> A >> B;

    int ans = 0;
    for (int i = 0; i < A.length() - B.length() + 1; i++) {
        string target = "";
        for (int j = i; j < i + B.length(); j++) target += A[j];
        if (target == B) ans++;
    }

    cout << ans;

    return 0;
}