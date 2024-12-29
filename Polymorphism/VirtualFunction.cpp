
#include <iostream>
using namespace std;

class A {

   public:
      virtual void f1()//virtual function parent ki late binding karega jisse child wala hi chalega function
       {               //agar virtual na hota to pointer ki wajah se child ka object banne pe parent chalta joke galat hai
           cout<<"Parent function executed "<<endl;
       }


};
class B:public A{
public:
    void f1()
    {
        cout<<"Child executed "<<endl;
    }

};

int main() {
    A *a1;
    B b1;
    a1=&b1;
    a1->f1();
    return 0;
}
