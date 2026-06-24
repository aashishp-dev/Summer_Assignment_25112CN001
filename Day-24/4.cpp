#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        bool duplicate = false;

        for(int j = 0; j < i; j++) {
            if(str[i] == str[j]) {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
            cout << str[i];
    }

    return 0;
}