#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> sum;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                cout << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }

    cout << "No Pair Found";

    return 0;
}