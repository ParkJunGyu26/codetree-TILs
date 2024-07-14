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
    int c1 = 0;
    index = 0;
    int size = A.length();
    for (auto c : check1) {
        for (int i = index; i < size; i++) {
            if (c == A[i]) {
                c1++;
                index = i+1;
                size = index+1;
                break;
            }
        }
    }

    // ab
    string check2 = "ab";
    int c2 = 0;
    index = 0;
    size = A.length();
    for (auto c : check2) {
        for (int i = index; i < size; i++) {
            if (c == A[i]) {
                c2++;
                index = i+1;
                size = index+1;
                break;
            }
        }
    }

    string ans1, ans2;
    if (c1 == 2) ans1 = "Yes";
    else ans1 = "No";

    if (c2 == 2) ans2 = "Yes";
    else ans2 = "No";

    cout << ans1 << " " << ans2;

    return 0;
}