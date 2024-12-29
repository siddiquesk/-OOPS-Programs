#include <iostream>
using namespace std;

class UnaryO{
int x,y;
public:
    void setData(int p,int q)
    {
      x=p;
      y=q;
    }
    UnaryO operator++()
    {
        UnaryO h1;
        h1.x=++x;
        h1.y=++y;
        return h1;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }

};

int main(){
UnaryO a1,a2;
a1.setData(5,3);
a2=++a1;
a2.display();

return 0;
}

