#include <iostream>
#include <string>
using namespace std;

class Answer {
    private:
        string code;
        char place;
        int time;

    public:
        Answer(string code, char place, int time) {
            this->code = code;
            this->place = place;
            this->time = time;
        }

        string getCode() { return code; }
        char getPlace() { return place; }
        int getTime() { return time; }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char place;
    int time;

    cin >> code >> place >> time;

    Answer answer1 = Answer(code, place, time);
    cout << "secret code : " << answer1.getCode() << endl;
    cout << "meeting point : " << answer1.getPlace() << endl;
    cout << "time : " << answer1.getTime() << endl;
    
    return 0;
}