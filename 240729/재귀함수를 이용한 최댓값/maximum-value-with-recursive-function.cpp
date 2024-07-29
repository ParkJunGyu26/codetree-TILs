#include <iostream>
using namespace std;

#define MAX_SIZE 101

int n;
int A[MAX_SIZE];

int solution(int index, int answer) {
    if (index == n-1) return answer;

    if (A[index] >= answer) answer = A[index];
    
    return solution(index+1, answer);
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    cout << solution(0, 0);
    
    return 0;
}