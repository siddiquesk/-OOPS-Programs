//generic class Template program


#include<iostream>
using namespace std;
template<typename P,typename Q>
class Demo{
 P x;
 Q y;
public:
    void f1(P a,Q b)
    {
        cout<<"sum is "<<a+b;
    }

};
int main()
{
    Demo<int,double>d1;
    d1.f1(10,20.5);
    return 0;
}
