
#include<iostream>
using namespace std;
class Binary{
 int x, y;
 public:
     void setData(int p, int q)
     {
         x=p;
         y=q;
     }
       Binary operator +(Binary g1)
     {
         Binary h1;
         h1.x=x+g1.x;
         h1.y=y+g1.y;
         return h1;
     }
     void display()
     {
         cout<<x<<" "<<y<<endl;
     }

};

int main()
{
    Binary b1,b2,b3;
    b1.setData(5,7);
    b2.setData(6,8);
    b3=b1+b2;
    b3.display();

    return 0;
}

