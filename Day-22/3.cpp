#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    char ch;
    cin >> ch;

    int count = 0;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ch)
            count++;
    }

    cout << "Frequency = " << count;

    return 0;
}