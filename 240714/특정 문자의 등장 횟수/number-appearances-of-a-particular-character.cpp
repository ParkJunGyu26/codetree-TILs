#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    int ans1 = 0;
    int ans2 = 0;

    string check1 = "ee";
    string check2 = "eb";

    for (int i = 0; i < A.length()-1; i++) {
        string target = "";
        for (int j = i; j < i+2; j++) target += A[j];
        if (target == check1) ans1++;
        if (target == check2) ans2++;
    }

    cout << ans1 << " " << ans2;

    return 0;
}