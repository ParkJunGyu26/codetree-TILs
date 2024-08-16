#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student {
    public:
        string name;
        int kor, eng, math;

        Student(string n, int k, int e, int m) {
            name = n;
            kor = k;
            eng = e;
            math = m;
        }
        Student() {};
};

bool cmp(Student a, Student b) {
    return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Student person[10];

    for (int i = 0; i < n; i++) {
        string n;
        int k, e, m;
        cin >> n >> k >> e >> m;

        person[i] = Student(n, k, e, m);
    }

    sort(person, person+n, cmp);

    for (int i = 0; i < n; i++) {
        cout << person[i].name << " " << person[i].kor << " " << person[i].eng << " " << person[i].math << "\n";
    }
    return 0;
}