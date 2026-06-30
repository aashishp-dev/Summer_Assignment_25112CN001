#include <iostream>
using namespace std;

int main() {
    string name[3];
    int marks[3];

    for(int i = 0; i < 3; i++) {
        cin >> name[i];
        cin >> marks[i];
    }

    cout << "\nRecords\n";

    for(int i = 0; i < 3; i++) {
        cout << name[i] << " " << marks[i] << endl;
    }

    return 0;
}