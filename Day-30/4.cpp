#include <iostream>
using namespace std;

void display(string name, int roll, float marks) {
    cout << "\nStudent Details\n";
    cout << "Name : " << name << endl;
    cout << "Roll : " << roll << endl;
    cout << "Marks: " << marks << endl;
}

int main() {
    string name;
    int roll;
    float marks;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Roll: ";
    cin >> roll;

    cout << "Enter Marks: ";
    cin >> marks;

    display(name, roll, marks);

    return 0;
}