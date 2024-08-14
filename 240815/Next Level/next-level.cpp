#include <iostream>
#include <string>
using namespace std;

class User {
    private:
        string id;
        int level;
    
    public:
        User(string id = "codetree", int level = 10) {
            this->id = id;
            this->level = level;
        }

        string getId() { return id; }

        int getLevel() { return level; }

        void setId(string chageId) {
            id = chageId;
        } 

        void setLevel(int chageLevel) {
            level = chageLevel;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    User user1 = User();
    cout << "user " << user1.getId() << " lv " << user1.getLevel() << endl;

    string id;
    int level;

    cin >> id >> level;

    user1.setId(id);
    user1.setLevel(level);
    cout << "user " << user1.getId() << " lv " << user1.getLevel() << endl;

    return 0;
}