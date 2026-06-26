#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "Q1. Capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n";
    cin >> answer;

    if(answer == 2)
        score++;

    cout << "\nQ2. 5 + 5 = ?\n";
    cout << "1. 10\n2. 15\n3. 20\n";
    cin >> answer;

    if(answer == 1)
        score++;

    cout << "\nYour Score = " << score << "/2";

    return 0;
}