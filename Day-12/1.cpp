#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int temp=n,rev=0;

    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }

    return temp==rev;
}

int main()
{
    int n;
    cin>>n;

    if(palindrome(n))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}