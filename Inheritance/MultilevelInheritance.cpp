
#include <iostream>
using namespace std;
class Grandparent
{
public:
    void GrandparentMessage()
    {
        cout << "This is the Grandparent class." << endl;
    }
};
class Parent : public Grandparent
{
public:
    void ParentMessage()
    {
        cout << "This is the Parent class." << endl;
    }
};
class Child : public Parent
 {
public:
    void ChildMessage()
    {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child p1;                // Object of the Child class
    p1.GrandparentMessage(); // Inherited from Grandparent
    p1.ParentMessage();      // Inherited from Parent
    p1.ChildMessage();       // Defined in Child
    return 0;
}
