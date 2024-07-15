#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string S;
    int q;

    cin >> S >> q;
    for (int i = 0; i < q; i++) {
        int command;
        cin >> command;
        if (command == 1) {
            int num[2];
            for (int j = 0; j < 2; j++) cin >> num[j];

            for (int j = 0; j < S.length(); j++) {
                char tmp = S[num[0]-1];
                S[num[0]-1] = S[num[1]-1];
                S[num[1]-1] = tmp;
            }
        } else {
            char ch[2];
            for (int j = 0; j < 2; j++) cin >> ch[j];

            for (int j = 0; j < S.length(); j++) {
                if (S[j] == ch[0]) S[j] = ch[1];
            }
        }
        cout << S << endl;
    }

    return 0;
}