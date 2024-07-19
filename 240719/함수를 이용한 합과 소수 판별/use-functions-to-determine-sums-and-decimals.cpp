#include <iostream>
#include <string>
using namespace std;

bool even_check(int num) {
    string number = to_string(num);
    int cnt = 0;
    for (int i = 0; i < number.size(); i++) cnt += number[i] - '0';
    if (cnt % 2 == 0) return true;
    return false;
}

bool check(int num, int* sosu) {
    if (sosu[num] == 0 && even_check(num)) return true;
    return false;
}

void eratos(int* sosu, int size) {
    for (int i = 2; i < size; i++) {
        for (int j = i * 2; j < size; j += i) {
            if (sosu[j] == 0) sosu[j] = 1;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int sosu[101] = {0};
    sosu[0] = sosu[1] = 1;
    int size = sizeof(sosu) / sizeof(sosu[0]);
    eratos(sosu, size);

    int ans = 0;
    for (int i = a; i <= b; i++) {
        if (check(i, sosu)) ans++;
    }
    cout << ans;
    return 0;
}