#include <iostream>
#include <string>
#include <tuple>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    tuple<string, string, string> person[10];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name, addr, city;
        cin >> name >> addr >> city;
        person[i] = make_tuple(name, addr, city);
    }

    int targetIdx = 0;
    string targetName = get<0>(person[targetIdx]);

    for (int i = 1; i < n; i++) {
        string nowName = get<0>(person[i]);
        if (nowName > targetName) {
            targetIdx = i;
            targetName = nowName;
        }
    }

    cout << "name " << get<0>(person[targetIdx]) << "\n";
    cout << "addr " << get<1>(person[targetIdx]) << "\n";
    cout << "city " << get<2>(person[targetIdx]) << "\n";

    return 0;
}