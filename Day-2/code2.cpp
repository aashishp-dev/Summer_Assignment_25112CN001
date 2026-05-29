#include <iostream>
int main() {
    int n,revNum =0,remainder;
    std::cout<<"Enter an integer: ";
    std::cin>>n;
    int originalNum = n; 
    while(n != 0) {
        remainder = n % 10; // Get the last digit
        revNum = revNum * 10 + remainder; // Append it to the reversed number
        n /= 10; // Remove the last digit
    }
    std::cout<<"The reverse of the number is: "<<revNum<<std::endl;  
    return 0;
}