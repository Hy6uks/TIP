#include <iostream>
using namespace std;

class Nextchet {
private:
    int n;

public:
    Nextchet(int value) : n(value) {}

    int get() const {
        int parity = ((n % 2) + 2) % 2;
        return n + 2 - parity;
    }
};

int main() {
    int n;
    cin >> n;

    Nextchet obj(n);
    cout << obj.get();

    return 0;
}
