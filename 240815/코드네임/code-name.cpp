#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    tuple<int, char> people[5];

    for (int i = 0; i < 5; i++) {
        char name;
        int score;
        cin >> name >> score;
        people[i] = make_tuple(score, name);
    }

    tuple<char, int> answer = *min_element(people, people+5);
    char ansName;
    int ansScore;
    tie(ansScore, ansName) = answer;

    cout << ansName << " " << ansScore;

    return 0;
}