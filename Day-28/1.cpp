#include <iostream>
using namespace std;

int main() {
    string book;

    cout << "Enter Book Name: ";
    getline(cin, book);

    cout << "Book Issued: " << book;

    return 0;
}