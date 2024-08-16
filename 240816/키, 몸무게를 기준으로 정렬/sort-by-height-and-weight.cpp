#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    vector<tuple<int, int, string>> people;

    for (int i = 0; i < n; i++) {
        string n;
        int h, w;
        cin >> n >> h >> w;

        people.push_back(make_tuple(h, -w, n));
    }

    sort(people.begin(), people.end());

    for (int i = 0; i < n; i++) {
        string name;
        int height, weight;
        tie(height, weight, name) = people[i];
        cout << name << " " << height << " " << -weight << "\n";
    }
    return 0;
}