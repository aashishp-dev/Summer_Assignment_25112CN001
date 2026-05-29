#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int start, end;

   
    std::cout << "Enter the starting number: ";
    std::cin >> start;

   
    std::cout << "Enter the ending number: ";
    std::cin >> end;

    std::cout << "\nPrime numbers between " << start << " and " << end << " are:\n";

   
    for (int currentNumber = start; currentNumber <= end; currentNumber++) {
        if (isPrime(currentNumber)) {
            std::cout << currentNumber << " ";
        }
    }
    
    std::cout << "\n";

    return 0;
}