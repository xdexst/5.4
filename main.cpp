#include <iostream>
#include <string>
#include "tbook.h"
#include "tbook.cpp"
using namespace std;

int main() {
    TBook book;

    cout << "Before:" << endl;
    cout << "Name: " << book.Name << endl;
    cout << "Author: " << book.Author << endl;
    cout << "Count: " << book.Count << endl;

    book.Name = "War and Peace";
    book.Author = "Lev Tolstoy";
    book.Count = 15;

    cout << "After:" << endl;
    cout << "Name: " << book.Name << endl;
    cout << "Author: " << book.Author << endl;
    cout << "Count: " << book.Count << endl;

    return 0;
}