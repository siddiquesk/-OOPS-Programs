#include <iostream>
#include <string>
using namespace std;

class Nokiya
{
    int x; // For age
    string y; // For name
     public:
    void User(int q, string s)
     {
        x = q;  // Assign age
        y = s;  // Assign name
    }

    void display() {
        cout << "Your age is: " << x << endl;
        cout << "Your name is: " << y << endl;
        cout << endl;
    }
};

int main()
 {
    Nokiya s1, s2;
    int x;
    string y;

    cout << "Enter your name: ";
    cin >> y;  // Input name
    cout << "Enter your age: ";
    cin >> x;  // Input age

    s1.User(x, y);
    s1.display();

    s2.User(x, y);
    s2.display();

    return 0;
}

