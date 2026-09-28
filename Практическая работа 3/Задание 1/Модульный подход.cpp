#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    double a, b;
    cout << "Введите катеты a и b: ";
    cin >> a >> b;
    
    cout << "Гипотенуза = " << hypotenuse(a, b) << endl;
    return 0;
}
