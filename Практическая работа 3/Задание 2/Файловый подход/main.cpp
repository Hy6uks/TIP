#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;

    int parity = ((n % 2) + 2) % 2;

    fout << n + 2 - parity;

    return 0;
}
