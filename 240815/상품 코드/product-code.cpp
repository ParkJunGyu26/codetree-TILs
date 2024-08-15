#include <iostream>
#include <string>
using namespace std;

class Product {
    private:
        string name;
        int code;
    
    public:
        Product(string name = "codetree", int code = 50) {
            this->name = name;
            this->code = code;
        };

        ~Product();

        string getName() { return name; }
        int getCode() { return code; }

        void setName(string name) {
            this->name = name;
        }

        void setCode(int code) {
            this->code = code;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Product *answer = new Product();
    cout << "product " << answer->getCode() << " is " << answer->getName() << "\n";

    string change_name;
    int change_code;

    cin >> change_name >> change_code;

    answer->setName(change_name);
    answer->setCode(change_code);

    cout << "product " << answer->getCode() << " is " << answer->getName() << "\n";

    return 0;
}