#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        for(int j = i + 1; j < str.length(); j++) {
            if(str[i] == str[j]) {
                cout << str[i];
                return 0;
            }
        }
    }

    cout << "No Repeating Character";

    return 0;
}