#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string a, b;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    bool check = false;
    for (int i = 0; i < a.size(); i++) {
        check = false;
        if (a[i] == b[i]) check = true;
    }

    if (check) cout << "Yes";
    else cout << "No";
    return 0;
}