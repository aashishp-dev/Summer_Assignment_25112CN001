#include <iostream>
int main() {
    long long n,product=1;
    std::cout<<"Enter an integer: ";
    std::cin>>n;
    if(n<0) 
        n=-n; // Handle negative numbers
    if(n==0) {
        product=0; // The product of digits in 0 is considered as 0
    }
    else {
        while(n > 0) {
            int digit = n % 10; // Get the last digit
            product *= digit; // Multiply it to the product
            n /= 10; // Remove the last digit
        }
    }
    std::cout<<"The product of the digits is: "<<product<<std::endl;
    return 0;
}