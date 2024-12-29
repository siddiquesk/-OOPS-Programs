#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("demo.txt", ios::app | ios::app); // Spaces hataye gaye hain
    fout << "Mumbaise";
    fout<<"Nashik";
    cout<<fout.tellp();
    fout.close();
    return 0;
}
