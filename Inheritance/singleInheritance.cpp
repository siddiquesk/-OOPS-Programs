
#include <iostream>
using namespace std;
class Parent {
public:
    void parentMessage()
    {
        cout << "This is the Parent class." << endl;
    }
};

// Derived class
class Child : public Parent
{
   public:
    void ChildMessage()
     {
        cout << "This is the Child class." << endl;
     }
};

int main()
{
    Child s1; // Object of derived class
    s1.ParentMessage(); // Inherited from Parent class
    s1.ChildMessage();  // Defined in Child class
    return 0;
}
