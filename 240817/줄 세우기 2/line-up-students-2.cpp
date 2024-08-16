#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    vector<tuple<int, int, int>> students;
    for (int i = 0; i < n; i++) {
        int height, weight;
        cin >> height >> weight;

        students.push_back(make_tuple(height, -weight, i+1));
    }

    sort(students.begin(), students.end());
    for (int i = 0; i < n; i++) {
        int h, w, index;
        tie(h, w, index) = students[i];

        cout << h << " " << -w << " " << index << "\n";
    }
    return 0;
}