#include <iostream>
using namespace std;

int main() {
    string books[3];

    for(int i = 0; i < 3; i++)
        cin >> books[i];

    cout << "\nAvailable Books\n";

    for(int i = 0; i < 3; i++)
        cout << books[i] << endl;

    return 0;
}