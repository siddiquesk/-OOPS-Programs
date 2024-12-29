
/*

What is Abstraction in C++?
Abstraction is a concept in object-oriented programming (OOP) that focuses on hiding the internal details of how something works and showing only the essential features to the user.
It allows you to focus on what an object does instead of how it does it.

How Abstraction Works?
Hiding Complexity:
Abstraction hides the complex internal workings of a system and shows only the necessary parts.
Example: When you use a TV remote, you press buttons to change channels or volume. You don’t need to know the internal circuitry of the TV.

Providing an Interface:
Abstraction provides a clear and simple interface for interacting with an object while hiding its implementation.

How to Achieve Abstraction in C++?
Using Abstract Classes:

An abstract class is a class that contains at least one pure virtual function.
A pure virtual function is declared with = 0 and must be overridden in the derived class.
This ensures that derived classes provide their own implementation, while the base class only provides the structure (interface).
Using Access Modifiers:

Private: To hide internal details.
Public: To expose only necessary functions or data.

Practical Example in Real Life:
ATM Machine:
You use an ATM to withdraw money, check balance, or transfer funds.
You don’t need to know how the ATM connects to the bank's servers or processes your request.
The ATM shows you only the options (interface) and hides the internal process

Advantages of Abstraction:
Reduces Complexity: Focus on what an object does, not how it does it.
Improves Code Maintainability: Changes in implementation don’t affect the interface.
Enhances Security: Hides sensitive data and internal details.

*/
//Abstract class reason pure virtual function
/*
#include<iostream>
using namespace std;

class A{
public:
    int x;
     A()
     {
         cout<<"Parent constructor "<<endl;
     }
    virtual void fun1()=0;//pure virtual function
    virtual void fun2()=0;//pure virtual function
   void fun6()
   {
       cout<<"Welcome"<<endl;
   }
};
class B:public A{
public:
    void fun1(){}// overriding ki pure virtual function ki
    void fun2(){}//overriding ki pure virtual function ki

    B(){
    cout<<"child constructor ";
    }
    fun4(int p)
    {
        x=p;
        cout<<"data "<<x<<endl;
    }

};

int main(){
B a1;
a1.fun1();
a1.fun4(100);
a1.fun6();
return 0;
}
*/


#include <iostream>
using namespace std;
class Exam {
public:
    int z;
    // Pure virtual function
    virtual void fun1() = 0;
    // Parent constructor
    Exam()
    {
        cout << "Parent constructor" << endl;
    }
    // Parameterized parent constructor
    Exam(int p)
    {
        z = p;
        cout << "Parent constructor: data is " << z << endl;
    }
};
class Exam2 : public Exam {
public:
    int p;
    void fun1() {}
    Exam2(int x) : Exam(x)
    { // Calls the parameterized constructor of the parent
        cout << "Child constructor" << endl;
    }
};
int main() {
    Exam2 b1(100); // Passes 100 to the parent constructor
    return 0;
}


















