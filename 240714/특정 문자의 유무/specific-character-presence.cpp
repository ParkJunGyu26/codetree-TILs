#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int index;
    string A;
    cin >> A;

    // ee
    string check1 = "ee";
    bool c1 = false;
    index = 0;
    int size = A.length();
    for (auto c : check1) {
        for (int i = index; i < size; i++) {
            if (c == A[i]) {
                c1 = true;
                index = i+1;
                size = index+1;
                break;
            } else {
                c1 = false;
            }
        }
    }

    // ab
    string check2 = "ab";
    bool c2 = false;
    index = 0;
    size = A.length();
    for (auto c : check2) {
        for (int i = index; i < size; i++) {
            if (c == A[i]) {
                c2 = true;
                index = i+1;
                size = index+1;
                break;
            } else {
                c2 = false;
            }
        }
    }

    string ans1, ans2;
    if (c1 == true) ans1 = "Yes";
    else ans1 = "No";

    if (c2 == true) ans2 = "Yes";
    else ans2 = "No";

    cout << ans1 << " " << ans2;

    return 0;
}