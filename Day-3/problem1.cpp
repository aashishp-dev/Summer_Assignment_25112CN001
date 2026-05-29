#include <iostream>
bool isPrime(int n) {
    // 1. Prime numbers must be greater than 1
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // We found a divisor, so it's not prime
        }
    }
    
    // 3. If no divisors are found, the number is prime
    return true;
}

int main() {
    int numberToCheck = 29;
    if (isPrime(numberToCheck)) {
        std::cout << numberToCheck << " is a prime number.\n";
    } else {
        std::cout << numberToCheck << " is not a prime number.\n";
    }

    return 0;
}