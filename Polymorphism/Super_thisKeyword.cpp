

#include <iostream>
using namespace std;

class A {

    int x,y;
public:
    void setData(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void display()
    {
        cout<<" data is "<<x<<" "<<y<<endl;
    }
};

int main() {
 A p1;
 p1.setData(10,20);
 p1.display();
 return 0;
}
