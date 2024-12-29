
//generic function Template program
#include<iostream>
using namespace std;
template<class Tel,class Mel>
void fun1( Tel p,Mel q)
{
    Mel z=p+q;
    cout<<z<<endl;

}
int main()
{

 fun1(5,3.3);
    return 0;
}
