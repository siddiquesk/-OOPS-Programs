
#include <iostream>
using namespace std;

class Exam
{
    int x,y;
    public:

    Exam()
   {
       cout<<"Default Constructor Executed"<<endl;//Default constructor
   }


   Exam(int p,int q)
   {
    x=p;
    y=q;
   }
   void display()
   {
       cout<<"Parametrized constructor value x "<<x<<endl;
       cout<<"Parametrized Constructor value y "<<y<<endl;
   }


};

int main()
 {
     Exam e1;
    Exam e2(6,9);
    e2.display();
    return 0;
}
