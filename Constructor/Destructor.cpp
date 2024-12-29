#include <iostream>
using namespace std;

class Exam {
    int *arr; // Dynamically allocated array
    int size;

public:
    Exam() {
        cout << "Default Constructor Executed" << endl; // Default constructor
        size = 5;
        arr = new int[size]; // Dynamically allocate memory
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1; // Initialize array with values
        }
        cout << "Array allocated and initialized." << endl;
    }

    ~Exam() {
        delete[] arr; // Release dynamically allocated memory
        cout << "Destructor Executed: Memory Released" << endl;
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Exam e1; // Default constructor will execute here
    e1.display(); // Display the array elements
    return 0; // Destructor will execute here automatically
}


