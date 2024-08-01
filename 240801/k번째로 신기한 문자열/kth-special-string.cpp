#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define MAX_SIZE 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    string T, A[MAX_SIZE];
    cin >> n >> k >> T;
    int index = 0;
    for (int i = 0; i < n; i++) {
        string target;
        cin >> target;
        if (target.find(T) == 0) {
            A[index++] = target;
        }
    }

    sort(A, A+index);
    cout << A[k-1];

    return 0;
}