#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A, B;

    cin >> A >> B;
    string ans1 = "";
    string ans2 = "";
    for (int i = 0; i < A.size(); i++) {
        if ('0' <= A[i] && A[i] <= '9') ans1 += A[i];
    }

    for (int i = 0; i < B.size(); i++) {
        if ('0' <= B[i] && B[i] <= '9') ans2 += B[i];
    }

    cout << stoi(ans1) + stoi(ans2);

    return 0;
}