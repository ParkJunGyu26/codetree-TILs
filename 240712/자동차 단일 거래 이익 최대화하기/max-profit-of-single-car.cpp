#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int car[1000];

    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> car[i];
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (car[i] < car[j] && ans < car[j] - car[i]) {
                ans = car[j] - car[i];
            }
        }
    }

    cout << ans;

    return 0;
}