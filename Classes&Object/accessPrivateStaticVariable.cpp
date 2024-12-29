#include <iostream>
using namespace std;
//static memory is only one time allocation if object is many created
//instance is created manytimes when object is created
//how can access static private variable
class Demo {

      public: int x;
  static int y;
  public:
  static void setData()
  {
      y=100;
      cout<<"Private static variable "<<y<<endl;
  }
  void Instance()
  {
      cout<<"Instance member variable "<<x<<endl;

  }

};
int Demo::y;
int main()
{
    Demo d1;
    d1.x=20;
    d1.Instance();
   Demo::setData();
    return 0;
}

//output
//Instance member variable 20
//Private static variable 100
