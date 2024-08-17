#include <iostream>
#include <string>
using namespace std;

int main() {
    // 이진수를 십진수로 바꾸고, 이 십진수를 17배를 해서, 다시 이진수로 변환
    string input;
    cin >> input;

    int first = 0;
    int now = 1;
    for (int i = input.size()-1; i >= 0; i--) {
        if (input[i] == '1') {
            first += now;
        }
        now *= 2;
    }
    first *= 17;

    int answer[100];

    int cnt = 0;
    while (true) {

        if (first < 2) {
            answer[cnt++] = first;
            break;
        }

        answer[cnt++] = first%2;
        first /= 2;
    }

    for (int i = cnt-1; i >= 0; i--) {
        cout << answer[i];
    }
    return 0;
}