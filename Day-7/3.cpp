#include <iostream>
using namespace std;

int sum_Digits(int n)
{
    if(n == 0)
        return 0;

    return (n % 10) + sum_Digits(n / 10);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of digits = " << sum_Digits(n);

    return 0;
}