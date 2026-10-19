// 1 задание 2 способ (тернарный оператор)
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int value = (i + j < n - 1) ? 0 : ((i + j == n - 1) ? 1 : 2); // если i+j<n-1 пишем 0 иначе (если i+j==n-1 пишем 1 иначе пишем 2)
            cout << value;
            if (j != n - 1) cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}