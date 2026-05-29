#include <iostream>
using namespace std;
int main() {
    long long n;
    int count = 0;
    cout << "Enter a positive integer to count the number of digits: ";
    cin >> n;
    if (n < 0) {
        cout << "Error: Please enter a positive integer." << endl;
    } else {
        while (n != 0) {
            n /= 10; // Remove the last digit
            count++;  // Increment the digit count
        }
        cout << "The number of digits is: " << count << endl;
    }
    return 0;
}