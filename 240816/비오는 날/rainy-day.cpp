#include <iostream>
#include <string>
#include <tuple>
using namespace std;

tuple<string, string, string> info[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int index = 0;
    for (int i = 0; i < n; i++) {
        string year, day, weather;
        cin >> year >> day >> weather;
        if (weather == "Rain")
            info[index++] = make_tuple(year, day, weather);
    }

    int targetIndex = 0;
    for (int i = 1; i < index; i++) {
        if (get<0>(info[targetIndex]) > get<0>(info[i])) {
            targetIndex = i;
        }
    }

    cout << get<0>(info[targetIndex]) << " " << get<1>(info[targetIndex]) << " " << get<2>(info[targetIndex]);


    return 0;
}