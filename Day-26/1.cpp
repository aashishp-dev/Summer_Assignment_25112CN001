#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess;

    cout << "Guess a number between 1 and 10: ";
    cin >> guess;

    if (guess == secret)
        cout << "Correct Guess!";
    else
        cout << "Wrong Guess!";

    return 0;
}