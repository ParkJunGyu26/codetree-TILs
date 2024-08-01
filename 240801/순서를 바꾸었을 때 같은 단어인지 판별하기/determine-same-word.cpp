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

    bool check = true;
    for (int i = 0; i < max(a.size(), b.size()); i++) {
        if (a[i] != b[i]) check = false;
    }

    if (check) cout << "Yes";
    else cout << "No";
    return 0;
}