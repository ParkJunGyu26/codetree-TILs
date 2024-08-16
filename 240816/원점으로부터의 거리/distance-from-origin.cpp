#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    vector<tuple<int, int, int, int>> points;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        points.push_back(make_tuple(abs(x)+abs(y), i+1, x, y));
    }

    sort(points.begin(), points.end());

    for (int i = 0; i < n; i++) {
        int tmp, index, x, y;
        tie(tmp, index, x, y) = points[i];
        cout << index << "\n";
    }
    return 0;
}