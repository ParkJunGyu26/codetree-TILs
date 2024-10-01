#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K, P, T;
    cin >> N >> K >> P >> T;

    int person[101] = {0}; 

    person[P] = 1; // P번째 사람은 감염자
    vector<tuple<int, int, int>> info; // 시간 순서대로 정렬하기 위함
    unordered_map<int, int> hand; // 인당 악수 횟수를 위한 해시
    for (int i = 1; i <= N; i++)
        hand.insert(make_pair(i, K));

    int t, x, y;
    for (int i = 0; i < T; i++) {
        cin >> t >> x >> y;
        info.push_back(make_tuple(t, x, y));
    }

    sort(info.begin(), info.end());

    for (auto i : info) {
        bool check = false;
        int p1 = get<1>(i);
        int p2 = get<2>(i);
        // 둘 중 하나만 감염자 경우
        // 둘 다 감염자 경우
        // 둘 다 비감염자 경우
        
        if (person[p1] == 1 && hand[p1] > 0) {
            if (person[p2] != 1) { // p1만 감염자 경우
                person[p2] = 1;
            }
            if (person[p2] == 1 && hand[p2] > 0) { // 둘 다 감염자 경우
                hand[p2]--;
                check = true;
            }
            hand[p1]--;
        }

        if (check) continue;

        if (person[p2] == 1 && hand[p2] > 0) {
            if (person[p1] != 1) {
                person[p1] = 1;
                hand[p2]--;
            }
        }
    }

    for (int i = 1; i <= N; i++)
        cout << person[i];

    return 0;
}