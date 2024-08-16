#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
        int height, weight, number;

        Student(int h, int w, int n) {
            height = h;
            weight = w;
            number = n;
        }

        Student() {}
};

bool cmp(Student a, Student b) {
    if (a.height != b.height)
        return a.height > b.height;
    
    if (a.weight != b.weight)
        return a.weight > b.weight;
    
    return a.number < b.number;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Student person[1000];

    for (int i = 0; i < n; i++) {
        int h, w;
        cin >> h >> w;

        person[i] = Student(h, w, i+1);
    }

    sort(person, person+n, cmp);

    for (int i = 0; i < n; i++) {
        cout << person[i].height << " " << person[i].weight << " " << person[i].number << "\n";
    }
    return 0;
}