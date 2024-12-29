/* Polymorphism in C++ (Short Notes)
Polymorphism means "one name, many forms." It allows the same function or operator to behave differently based on the context.

Types of Polymorphism
1. Compile-time Polymorphism (Static Binding)
Happens at compile time.
The function to execute is decided during compilation.
Achieved through:
Function Overloading: Same function name with different parameters.
Operator Overloading: Redefining operators for user-defined types.
2. Runtime Polymorphism (Dynamic Binding)
Happens at runtime.
The function to execute is decided during program execution.
Achieved through:
Function Overriding: Redefining a base class function in the derived class.
Virtual Functions: Ensure the correct overridden function is called.
Key Concepts
Function Overloading

Using the same function name with different parameter lists.
Example: add(int, int) and add(double, double).
Operator Overloading

Redefining operators like +, -, etc., for custom behavior.
Function Hiding

When a derived class defines a function with the same name as the base class but without virtual.
The base class function is hidden.
Function Overriding

Redefining a base class function in the derived class with the same name, parameters, and return type.
Requires inheritance.

//Overloading:Same function name, different parameters (in the same class).
//Hiding:Derived class function hides the base class function (no virtual keyword).
//Overriding:Derived class redefines a base class function
(with virtual keyword for runtime polymorphism).

Polymorphism Benefits
Code reusability.
Flexibility to handle different data types with a single interface.
Easier maintenance and extension of code.
*/
//Function overloading program
/*
#include <iostream>
using namespace std;

class A {

   public:
       void f1()
       {
           cout<<"Fun1 executed no argyment ";//Function overloadin
       }
       void f1(int x)
       {
           cout<<x<<endl;
           cout<<"Fun1 executed with argument";//Function overloadin
       }

};


int main() {
   A a1;
   a1.f1();
   a1.f1(50);
    return 0;
}
*/


//Function overriding hiding program
#include <iostream>
using namespace std;

class A {

   public:
       void f1()
       {
           cout<<"Fun1 executed no argument "<<endl;//overloading
       }
       void f1(int x)
       {

           cout<<"Fun1 executed with argument"<<endl;//Function hiding
       }

};
class B{
public:
    void f1()
    {
        cout<<"Child executed "<<endl;//Function overrriding
    }
   void f1(int p)
    {
        cout<<"Child executed with hiding"<<endl;//Function overrriding
    }
};

int main() {
    B a1;
    a1.f1(11);
    return 0;
}











































