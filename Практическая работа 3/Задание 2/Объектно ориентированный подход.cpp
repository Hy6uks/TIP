#include <iostream>
using namespace std;

class Nextchet{
public:
    int res(int n){
        return (n / 2 + 1) * 2;
    }
};

int main() {
    int n;
    cin >> n;

    Nextchet r;
    cout << r.res(n);

    return 0;
}
