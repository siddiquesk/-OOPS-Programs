#include<iostream>
using namespace std;
class Demo
{
    int x,y;
   public:
       void setData(int p,int q)
       {
           x=p;
           y=q;
       }
       void display()
       {

           cout<<" "<<x<<" "<<y;
       }

friend Demo operator +(Demo f1,Demo f2);
};
 Demo operator +(Demo f1,Demo f2)
{
    Demo g1;
    g1.x=f1.x+f2.x;
    g1.y=f2.x+f2.y;
    return g1;
}
int main()
{
    Demo d1,d2,d3;
    d1.setData(5,7);
    d2.setData(7,9);
    d3 =d1+d2;
     d3.display();
    return 0;
}



