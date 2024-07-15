#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string S;
    int q;
    
    cin >> S >> q;

    for (int i = 0; i < q; i++) {
        char command[3];
        for (int j = 0; j < 3; j++) cin >> command[j];
        
        if (command[0] == '1') {
            char tmp = S[(command[1]-'0')-1];
            S[(command[1]-'0')-1] = S[(command[2]-'0')-1];
            S[(command[2]-'0')-1] = tmp;
        } else {
            for (int j = 0; j < S.length(); j++) {
                if (S[j] == command[1]) S[j] = command[2];
            }
        }
        cout << S << endl;
    }

    return 0;
}