#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person {
    public:
        string name;
        int height;
        double weight;

        Person(string n, int h, double w) {
            name = n;
            height = h;
            weight = w;
        }
        Person() {}
};

bool cmp1(Person a, Person b) {
    return a.name < b.name;
}

bool cmp2(Person a, Person b) {
    return a.height > b.height;
}

void print(Person person[], int size) {
    for (int i = 0; i < size; i++) {
        cout << person[i].name << " " << person[i].height << " " << person[i].weight << "\n";
    }
    cout << "\n";
}

int main() {
    // 여기에 코드를 작성해주세요.
    Person person[5];
    for (int i = 0; i < 5; i++) {
        string s;
        int h;
        double w;
        cin >> s >> h >> w;

        person[i] = Person(s, h, w);
    }

    sort(person, person+5, cmp1);

    cout << "name\n";
    print(person, 5);

    sort(person, person+5, cmp2);

    cout << "height\n";
    print(person, 5);
    return 0;
}