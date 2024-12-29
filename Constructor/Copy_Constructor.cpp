
#include <iostream>
using namespace std;

class Exam
{
    int x,y;
    public:
   Exam(int p,int q)
   {
    x=p;
    y=q;
   }
  Exam(Exam &g1)
  {
      g1.x++;
      g1.y++;
  }
  void display()
  {
      cout<<"Increment with the help of copy constructor "<<x<<" "<<y;
  }

};

int main()
 {

    Exam e1(10,15);
    Exam e2(e1);
    e1.display();
    return 0;
}
