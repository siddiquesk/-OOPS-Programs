//Dynamic memory allocation
#include <iostream>
using namespace std;
int main()
{
    // Single integer allocation
    int *k;
    k = new int;
    *k = 200;
    cout << "Value of k: " << *k << endl;
    // Array allocation
    int *p;
    int size = 4; // Size of the array
    p = new int[size];
    // Assigning values to the array using a loop
    for (int i = 0; i < size; i++) {
        p[i] = (i + 1) * 10; // Assigning values: 10, 20, 30, 40
    }
    // Printing values of the array using a loop
    cout << "Array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << p[i] << endl; // Accessing array elements
    }
    // Freeing the allocated memory
    delete k;
    delete[] p;
    return 0;
}

