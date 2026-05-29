#include <iostream>
int findGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int findLCM(int a, int b) {
    
    if (a == 0 || b == 0) {
        return 0;
    }
    return (a / findGCD(a, b)) * b;
}

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    int lcm = findLCM(num1, num2);
    std::cout << "\nThe LCM of " << num1 << " and " << num2 << " is: " << lcm << "\n";
    return 0;
}