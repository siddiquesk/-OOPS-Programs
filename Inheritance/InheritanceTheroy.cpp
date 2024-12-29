/*  C++ Inheritance - Theory Notes
What is Inheritance?
Inheritance is a mechanism in C++ where one class (child/derived class) inherits the properties and behaviors (data members and member functions) of another class (parent/base class).
It allows code reuse and establishes a relationship between classes.
Key Features of Inheritance

Code Reusability: Existing code can be reused in new classes.
Parent-Child Relationship: Derived class inherits features from the base class.
Access Control: Inheritance respects access specifiers (private, protected, public).
Types of Inheritance in C++

1. Single Inheritance
In this type, a single derived class inherits from a single base class.
Structure: One parent class → One child class.
Use Case: Simple relationships like Vehicle → Car.


2. Multilevel Inheritance
In this type, a class is derived from another derived class.
Structure: Parent class → Child class → Grandchild class.
Use Case: Hierarchical relationships like Animal → Mammal → Dog.


3. Multiple Inheritance
In this type, a single derived class inherits from multiple base classes.
Structure: Multiple parent classes → One child class.
Use Case: Combining features from different classes like Teacher + Researcher → Professor.

4. Hierarchical Inheritance
In this type, multiple derived classes inherit from a single base class.
Structure: One parent class → Multiple child classes.
Use Case: Common base functionality like Shape → Circle, Rectangle, Triangle.


5. Hybrid (or Virtual) Inheritance
It is a combination of two or more types of inheritance, such as multiple and multilevel inheritance.
Structure: Complex relationships involving multiple and multilevel inheritance.
Use Case: Avoiding ambiguity when a derived class inherits from multiple classes that have a common base class.

Access Specifiers in Inheritance
Public Inheritance: Public and protected members of the base class remain public and protected in the derived class.
Protected Inheritance: Public and protected members of the base class become protected in the derived class.
Private Inheritance: Public and protected members of the base class become private in the derived class.

Key Points to Remember:

Base Class: The class being inherited from.
Derived Class: The class that inherits from the base class.
Constructors and destructors of the base class are executed first during object creation and destruction.
Use protected to allow derived classes to access members while keeping them hidden from other classes.
Virtual Inheritance: Used to avoid duplication in hybrid inheritance.*/
