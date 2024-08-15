#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    tuple<char, int> people[5];

    for (int i = 0; i < 5; i++) {
        char name;
        int score;
        cin >> name >> score;
        people[i] = make_tuple(name, score);
    }

    tuple<char, int> answer = *min_element(people, people+5);
    char ansName;
    int ansScore;
    tie(ansName, ansScore) = answer;

    cout << ansName << " " << ansScore;

    return 0;
}