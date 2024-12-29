
#include<iostream>
using namespace std;
class Complex{
 int x, y;
 public:
     void setData(int p, int q)
     {
         x=p;
         y=q;
     }
     Complex Add(Complex g1)
     {
         Complex h1;
         h1.x=x+g1.x;
         h1.y=y+g1.y;
         return h1;
     }
     void display()
     {
         cout<<x<<"+"<<y<<"i"<<endl;
     }

};

int main()
{
    Complex c1,c2,c3;
    c1.setData(11,17);
    c2.setData(12,18);
    c3=c1.Add(c2);
    c3.display();

    return 0;
}
