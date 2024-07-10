#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double stu[8];

    for (int i = 0; i < 8; i++)
        cin >> stu[i];

    double score = 0;
    for (int i = 0; i < 8; i++)
        score += stu[i];
    
    score = score / (double)8;
    printf("%.1f", score);

    return 0;
}