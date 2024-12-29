#include <iostream>
using namespace std;

class Example2; // Forward declaration

class Example {
    int x;

public:
    void fun1() {
    cout<<"it is not friend function"<<endl;
    }

    friend void fun3(Example e1, Example2 e2); // Declare fun3 as a friend
};

class Example2 {
    int y;

public:
    void fun2() {
         cout<<"it is not friend function"<<endl;
    }
    friend void fun3(Example e1, Example2 e2); // Declare fun3 as a friend
};

void fun3(Example e1, Example2 e2) {
    e1.x = 5;   // Access private member of Example
    e2.y = 10;  // Access private member of Example2
    cout <<"Friend function access sum is "<< e1.x + e2.y << endl;
}

int main() {
    Example p1;
    Example2 p2;
    fun3(p1, p2); // Call fun3 with objects of both classes
    p1.fun1();
    p2.fun2();
    return 0;
}

