#include <iostream>
using namespace std;
int main() {
    int n,rev = 0,rem,org;
    std::cout << "Enter an integer: "; 
    cin >> n;
    org = n; // Store the original number
    while(n != 0) {
        rem = n % 10; // Get the last digit
        rev = rev * 10 + rem; // Append it to the reversed number   
        n /= 10; // Remove the last digit
    }
    if(org == rev) {
        cout<<"The number is a palindrome."<<endl;
    } else {
        cout<<"The number is not a palindrome."<<endl;
    }
    return 0;
}