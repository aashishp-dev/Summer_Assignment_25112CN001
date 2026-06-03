#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, digit, sum = 0, count = 0;

    cout << "Enter number: ";
    cin >> n;

    temp = n;

    while(temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if(sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}