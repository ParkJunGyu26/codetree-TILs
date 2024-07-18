#include <iostream>
#include <string>
using namespace std;

string A, B;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> A >> B;

    int n = 0;

    int l = A.size();
    for (int i = 0; i < l; i++) {
        if (A == B) break;
        A = A.substr(l-1, 1) + A.substr(0, l-1);
        n++;
    }
    
    if (n == l) cout << -1;
    else cout << n;

    return 0;
}