#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter number: ";
    cin >> n;

    long long largest = 0;

    for(long long i = 2; i <= n; i++) {
        while(n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    cout << "Largest Prime Factor = " << largest;

    return 0;
}