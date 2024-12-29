
/*

 (--Ios---)i->input  o->output

A) istream ----->   (fstream child)      <---------  B)ostream
::::::::::                                   :::::::::::
1)ifstream  child istraem                     2)ofstream child ostream ka
||||||                                                     |||||
istreamwithassign child istram(cin object)           ostreamwithassign(cout object)

*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char a;
    /*
    ofstream fout; output file mai rakhne keliye data
    fout.open("demo.text");
    fout<<"Hello kareem";
    fout.close();
*/
ifstream fin;//input file se data nikal ke ram me and ram se hum print karte hai
fin.open("demo.text");
a=fin.get();
while(!fin.eof()){
   cout<<a;
   a=fin.get();
}
fin.close();


    return 0;
}
