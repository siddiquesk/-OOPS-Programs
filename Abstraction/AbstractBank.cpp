#include<iostream>
using namespace std;

class Bank{
    int rate;
public:
    virtual void interest()=0;

    void f1()
    {
        cout<<"parents applied.";
    }
    Bank()
    {
        rate=100;
        cout<<"Rate is "<<rate<<endl;
    }
};
class Saccount:public Bank{
public:
    void interest(){}
    Saccount()
    {

    }
};
class Caccount:public Bank{
public:
    void interest(){}
    Caccount()
    {

    }
};
int main()
{ Saccount p1;
  p1.f1();

}

