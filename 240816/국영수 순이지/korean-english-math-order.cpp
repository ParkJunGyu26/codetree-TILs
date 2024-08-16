#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Score {
    public:
        string name;
        int kor, eng, math;

        Score(string name, int kor, int eng, int math) {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }
        Score() {}
};

bool cmp(Score a, Score b) {
    if (a.kor == b.kor) {
        if (a.eng == b.eng) {
            return a.math > b.math;
        }
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Score person[10];

    for (int i = 0; i < n; i++) {
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;

        person[i] = Score(name, kor, eng, math);
    }

    sort(person, person+n, cmp);

    for (int i = 0; i < n; i++) {
        cout << person[i].name << " " << person[i].kor << " " << person[i].eng
 << " " << person[i].math << "\n";    }

    return 0;
}