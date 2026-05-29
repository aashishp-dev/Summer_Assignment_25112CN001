#include <iostream>
using namespace std;
int main() {
    int n,sum=0,remainder;
    cout<<"Enter an integer: ";
    cin>>n;
    int temp = (n<0) ? -n : n; // Handle negative numbers
    while(temp > 0) {
        remainder = temp % 10; // Get the last digit
        sum += remainder; // Add it to the sum
        temp /= 10; // Remove the last digit
    }
    cout<<"The sum of the digits is: "<<sum<<endl;  
    return 0;
}