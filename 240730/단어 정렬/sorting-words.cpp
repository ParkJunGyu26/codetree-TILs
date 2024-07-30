#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define MAX_SIZE 101

int n;
string A[MAX_SIZE];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    sort(A, A+n);
    for (int i = 0; i < n; i++) cout << A[i] << endl;
    return 0;
}