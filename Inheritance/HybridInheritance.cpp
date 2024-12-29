#include <iostream>
using namespace std;

// Base class 1
class Teacher {
public:
    void teacherInfo()
     {
        cout << "Teacher: Mr. Smith, Subject: Mathematics" << endl;
    }
};

// Base class 2
class Student {
public:
    void studentInfo()
    {
        cout << "Student: John Doe, Age: 16" << endl;
    }
};
// Derived class (Hybrid inheritance: Multiple inheritance from Student and Teacher)
class Mentor : public Teacher, public Student
{
    public:
    void mentorInfo() {
        cout << "This is a hybrid class combining Teacher and Student." << endl;
    }
};

int main() {
    Mentor h1;         // Object of Hybrid class
    h1.teacherInfo();  // Inherited from Teacher class
    h1.studentInfo();  // Inherited from Student class
    h1.mentorInfo();   // Defined in Hybrid class

    return 0;
}

