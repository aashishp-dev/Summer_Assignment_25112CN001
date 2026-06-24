#include <iostream>
using namespace std;

int main() {
    string str1, str2;

    cin >> str1 >> str2;

    string temp = str1 + str1;

    if(temp.find(str2) != string::npos)
        cout << "Rotation";
    else
        cout << "Not Rotation";

    return 0;
}