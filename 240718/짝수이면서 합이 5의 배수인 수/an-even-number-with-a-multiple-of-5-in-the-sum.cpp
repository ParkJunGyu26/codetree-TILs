#include <iostream>
#include <string>
using namespace std;

bool check(int n) { 
    string num = to_string(n);

    int cnt = 0;
    for (int i = 0; i < num.size(); i++) {
        cnt += num[i] - '0';
    }

    return n % 2 == 0 && cnt % 5 == 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if (check(n)) cout << "Yes";
    else cout << "No";
    return 0;
}