#include <iostream>
using namespace std;

bool armstrong(int n)
{
    int temp=n,sum=0;

    while(n>0)
    {
        int digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
    }

    return temp==sum;
}

int main()
{
    int n;
    cin>>n;

    if(armstrong(n))
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";

    return 0;
}