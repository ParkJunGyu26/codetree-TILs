#include <iostream>
using namespace std;

int max(char A, char B) {
    if ((int) A >= (int) B) return (int) A;
    return (int) B;
}

int min(char A, char B) {
    if ((int) A >= (int) B) return (int) B;
    return (int) A;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char A, B;
    cin >> A >> B;

    int MAX = max(A, B);
    int MIN = min(A, B);

    cout << MAX + MIN << " " << MAX - MIN;

    return 0;
}