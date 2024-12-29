#include <iostream>
using namespace std;

// Base class
class Book {
public:
    void bookDetails() {
        cout << "This is a book." << endl;
    }
};

// Derived class 1
class Author : public Book {
public:
    void authorDetails() {
        cout << "Author: J.K. Rowling." << endl;
    }
};

// Derived class 2
class Publisher : public Book {
public:
    void publisherDetails() {
        cout << "Publisher: Bloomsbury." << endl;
    }
};

int main() {
    Author a1;   // Object of Author class
    Publisher p1; // Object of Publisher class
    a1.bookDetails();  // Inherited from Book class
    a1.authorDetails();  // Defined in Author class
    p1.bookDetails();  // Inherited from Book class
    p1.publisherDetails();  // Defined in Publisher class

    return 0;
}

