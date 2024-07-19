#include <iostream>
using namespace std;

void check(int first, int second, char cal) {
    if (cal == '+') cout << first << " + " << second << " = " << first+second;
    else if (cal == '-') cout << first << " - " << second << " = " << first-second;
    else if (cal == '/') cout << first << " / " << second << " = " << first/second;
    else if (cal == '*') cout << first << " * " << second << " = " << first*second;
    else cout << "False";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int first, second;
    char cal;
    cin >> first >> cal >> second;
    check(first, second, cal);
    return 0;
}