#include <iostream>
using namespace std;
//static memory is only one time allocation if object is many created
//instance is created manytimes when object is cretaed
class Nokiya {
    public:
   int x;
  static int w;
  void setData()
  {
      cout<<"instance Memory is "<<x<<endl;
      cout<<"Static Memory is "<<w<<endl;
  }

};
//output
/*
instance Memory is 100
Static Memory is 400
instance Memory is 300
Static Memory is 400*/
int Nokiya::w;
int main()
{
    Nokiya s1, s2,s3;
    s1.x=100;
    s1.w=200;
    s2.x=300;
    s2.w=400;
    s1.setData();
    s2.setData();
    return 0;
}

