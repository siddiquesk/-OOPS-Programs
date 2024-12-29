
#include<iostream>
using namespace std;

class Car{
public:
int mic;

int radio;
void setTyre(){
cout<<radio<<endl;
cout<<"Radio is good"<<endl;
}
void setBrake(){
cout<<mic<<endl;
cout<<"Break succsessfully"<<endl;
}
};

int main(){
Car c1;
c1.mic=100;
c1.radio=200;

c1.setTyre();
c1.setBrake();

return 0;
}










