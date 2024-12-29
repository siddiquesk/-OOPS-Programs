/*
Encapsulation in C++ - Theory
Definition:
Encapsulation is the process of bundling data (variables) and methods (functions)
that operate on the data into a single unit, typically a class.
It also restricts direct access to some components of an object to ensure data security and integrity.

Key Features of Encapsulation:
Data Hiding: Restricts access to class members using access specifiers (private, protected, public).
Getter and Setter Methods: Provides controlled access to private data members.
Improved Security: Prevents unauthorized access and accidental modification of data.
*/
#include <iostream>
using namespace std;

class Person {
private:
    string name; // Private data member
    int age;
public:
    // Setter method to set the name
    void setName(string myName,int personage) {
        name = myName;
        age=personage;
    }

    // Getter method to get the name
    void getName() {
    cout << "Your Name is : " << name << endl;
    cout << "Your age is  : " << age << endl;
    }
};

int main() {
    Person p1;
    string name;
    int age;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
    p1.setName(name,age);
    p1.getName();
    return 0;
}
