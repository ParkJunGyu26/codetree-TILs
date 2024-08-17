#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    int after = a*60*24 + b*60 + c;
    int before = 11*60*24 + 11*60 + 11;
    
    if (after < before) cout << -1;
    else cout << after - before;

    return 0;
}