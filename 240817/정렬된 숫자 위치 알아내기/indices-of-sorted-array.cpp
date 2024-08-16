#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    vector<pair<int, int>> nums;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        nums.push_back(make_pair(num, i+1));
    }

    sort(nums.begin(), nums.end());
    // num : 1 1 2 3 6 7 30
    // index : 2 7 4 1 3 5 6
    // new index : 1 2 3 4 5 6 7

    vector<pair<int, int>> answer;
    for (int i = 0; i < n; i++) {
        int num = nums[i].first;
        int index = nums[i].second;

        answer.push_back(make_pair(index, i+1));
    }

    sort(answer.begin(), answer.end());
    
    for (int i = 0; i < n; i++) {
        cout << answer[i].second << " ";
    }

    return 0;
}