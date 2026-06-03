#include <iostream>
using namespace std;

int main() {
    int x, n;
    cout << "Enter base and power: ";
    cin >> x >> n;

    long long result = 1;

    for(int i = 1; i <= n; i++) {
        result *= x;
    }

    cout << "Answer = " << result;

    return 0;
}