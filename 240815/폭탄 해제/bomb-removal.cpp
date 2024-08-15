#include <iostream>
#include <string>
using namespace std;

class Bomb {
    private:
        string code;
        char color;
        int second;
    
    public:
        Bomb(string code, char color, int second) {
            this->code = code;
            this->color = color;
            this->second = second;
        }
        string getCode() { return code; }
        char getColor() { return color; }
        int getSecond() { return second; }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char color;
    int second;

    cin >> code >> color >> second;

    Bomb answer = Bomb(code, color, second);

    cout << "code : " << answer.getCode() << "\n";
    cout << "color : " << answer.getColor() << "\n";
    cout << "second : " << answer.getSecond() << "\n";
    
    return 0;
}