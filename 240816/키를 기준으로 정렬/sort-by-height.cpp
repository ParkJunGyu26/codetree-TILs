#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person {
    public:
        string name;
        int heigth;
        int weight;

        Person(string name = "", int heigth = 0, int weight = 0) {
            this->name = name;
            this->heigth = heigth;
            this->weight = weight;
        }
};

bool cmp(Person a, Person b) {
    return a.heigth < b.heigth;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Person person[10];

    for (int i = 0; i < n; i++) {
        string name;
        int heigth, weight;
        cin >> name >> heigth >> weight;
        person[i] = Person(name, heigth, weight);
    }

    sort(person, person+n, cmp);

    for (int i = 0; i < n; i++) {
        cout << person[i].name << " " << person[i].heigth << " " << person[i].weight << "\n";
    }

    return 0;
}