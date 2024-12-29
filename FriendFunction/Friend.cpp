#include <iostream>
using namespace std;

class Eaxample {
    int x, y;

public:
    friend int fun1(Eaxample p1, int h, int q);
};

int fun1(Eaxample p1, int h, int q) {
    p1.x = h;
    p1.y = q;
    int k=p1.x+ p1.y;
   return k;
}

int main() {
    Eaxample e1;
    int res=fun1(e1, 6, 9);
    cout<<"The result is "<<res;
    return 0;
}

