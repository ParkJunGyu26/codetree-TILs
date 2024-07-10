#include <iostream>
using namespace std;

int main() {
    int n;
    double score[5], ans;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
        ans += score[i];
    }

    ans = ans / (double)n;
    printf("%.1f\n", ans);
    
    if (ans >= 4.0) cout << "Perfact";
    else if (ans >= 3.0) cout << "Good";
    else cout << "Poor";

    // 여기에 코드를 작성해주세요.
    return 0;
}