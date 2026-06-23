#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int maxCount = 0;
    char result;

    for(int i = 0; i < str.length(); i++) {
        int count = 0;

        for(int j = 0; j < str.length(); j++) {
            if(str[i] == str[j])
                count++;
        }

        if(count > maxCount) {
            maxCount = count;
            result = str[i];
        }
    }

    cout << result;

    return 0;
}