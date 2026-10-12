// Тришкин Артём
// Цикл while
#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;
    
    int day = 1;
    double current_sum = X;
    
    while (current_sum < Y) {
        current_sum *= 1.1;
        day++;
    }
    
    cout << day << endl;
    return 0;
}

// Цикл do-while
#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;
    
    int day = 1;
    double current_sum = X;
    
    if (current_sum < Y) {
        do {
            current_sum *= 1.1;
            day++;
        } while (current_sum < Y);
    }
    
    cout << day << endl;
    return 0;
}

// Цикл for с диапазоном 100000
#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;
    
    double current_sum = X;
    int day = 1;
    
    for (int i = 1; i < 100000; i++) {
        if (current_sum >= Y) {
            day = i;
            break;
        }
        current_sum *= 1.1;
    }
    
    cout << day << endl;
    return 0;
}

// Цикл for с беск диапазоном
#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;
    
    double current_sum = X;
    
    for (int day = 1; ; day++) {
        if (current_sum >= Y) {
            cout << day << endl;
            break;
        }
        current_sum *= 1.1;
    }
    
    return 0;
}
