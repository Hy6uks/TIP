#include <fstream>
using namespace std;

int main() {
    ifstream fin("input1.txt");
    ofstream fout("output1.txt");

    int number;
    fin >> number;

    fout << "Число десятков: " << ((number / 10) % 10) << endl;

    fin.close();
    fout.close();
    return 0;
}
