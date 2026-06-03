#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter range: ";
    cin >> start >> end;

    for(int n = start; n <= end; n++) {

        int temp = n, count = 0, sum = 0;

        while(temp > 0) {
            count++;
            temp /= 10;
        }

        temp = n;

        while(temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if(sum == n)
            cout << n << " ";
    }

    return 0;
}