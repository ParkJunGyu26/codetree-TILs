#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B;
    cin >> A;
    cin >> B;

    // A에서 B를 찾습니다, 찾을 수 없을 때까지 반복합니다.
    while(A.find(B) != string::npos){
        int start_pos = A.find(B);
        // start_pos부터 B.length()개의 문자를 지웁니다.
        A.erase(start_pos, B.length());
    }

    cout << A;
    return 0;
}