#include <iostream>
using namespace std;
int main() {
    int N;
    int sum =0;
    cout << "Enter a positive integer(N): ";
    cin>>N;
    for(int i=1;i<=N;i++) {
        sum+=i;
    }
    cout<<"The sum of first "<<N<<" natural numbers is: "<<sum<<endl;
    return 0;
}