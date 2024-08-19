#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int line[201] = {0};
    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;

        for (int j = x1; j < x2; j++)   line[j+100]++;
    }

    int max = *max_element(begin(line), end(line));

    cout << max;
    return 0;
}