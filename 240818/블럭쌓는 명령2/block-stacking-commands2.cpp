#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    
    int block[101] = {0};
    for (int i = 0; i < k; i++) {
        int start, end;
        cin >> start >> end;

        for (int j = start; j <= end; j++) {
            block[j]++;
        }
    }

    cout << *max_element(block, block+n);

    return 0;
}