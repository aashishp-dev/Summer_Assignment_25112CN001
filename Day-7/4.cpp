#include <iostream>
#include <cmath>
using namespace std;

int reverseNumber(int n, int digits)
{
    if(n < 10)
        return n;

    return (n % 10) * pow(10, digits - 1)
           + reverseNumber(n / 10, digits - 1);
}

int main()
{
    int n, temp, digits = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    cout << "Reverse = " << reverseNumber(n, digits);

    return 0;
}