#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_SIZE 11

int n;
int A[MAX_SIZE];

int gcd(int Max, int Min) {
    while (Min != 0) {
        int tmp = Min;
        Min = Max % Min;
        Max = tmp;
    }

    return Max;
}

int lcm(int a, int b) {
    int Max = max(a, b);
    int Min = min(a, b);

    return a * b / gcd(Max, Min);
}

int solution(int LCM, int index) {
    if (index >= n) return LCM;

    LCM = lcm(LCM, A[index]);
    return solution(LCM, index+1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];

    if (n < 2) cout << A[n-1];
    else {
        int target = lcm(A[0], A[1]);
        cout << solution(target, 2);
    }

    return 0;
}