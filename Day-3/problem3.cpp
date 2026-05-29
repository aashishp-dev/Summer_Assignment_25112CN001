#include <iostream>
int findGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b; // Find the remainder of a divided by b
        a = b;                 // Replace 'a' with 'b'
        b = remainder;         // Replace 'b' with the remainder
    }
    return a; 
}

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    int gcd = findGCD(num1, num2);
    std::cout << "\nThe GCD of " << num1 << " and " << num2 << " is: " << gcd << "\n";

    return 0;
}