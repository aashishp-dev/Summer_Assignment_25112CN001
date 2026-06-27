#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    float marks;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\n--- Student Record ---\n";
    cout << "Name : " << name << endl;
    cout << "Roll : " << roll << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}