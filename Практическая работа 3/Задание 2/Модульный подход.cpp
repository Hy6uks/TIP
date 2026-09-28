#include <iostream>
using namespace std;

int nextchet(int n) {
    return n + 2 - n % 2;
}

int main() {
    int n;
    cin >> n;
    cout << nextchet(n);

    return 0;
}
