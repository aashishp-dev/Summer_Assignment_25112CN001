#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, total;
    float percentage;

    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    cout << "Total = " << total << endl;
    cout << "Percentage = " << percentage << endl;

    if(percentage >= 40)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}