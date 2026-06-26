#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter Age: ";
    cin >> age;

    if (age >= 18)
        cout << "Eligible for Voting";
    else
        cout << "Not Eligible for Voting";

    return 0;
}