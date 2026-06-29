#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    cout << "1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
    cin >> choice;

    cin >> a >> b;

    switch(choice) {
        case 1: cout << a + b; break;
        case 2: cout << a - b; break;
        case 3: cout << a * b; break;
        case 4: cout << a / b; break;
        default: cout << "Invalid";
    }

    return 0;
}