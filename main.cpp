#include <iostream>
#include "ecjthing.h"
using namespace std;

int main() {
    
    int number = 32;
    int* pNumber = &number;
    int &ref = number; //dorectly changes value of number if ref change

    cout << "Number: " << number << endl;
    cout << "Address of number: " << pNumber << endl;
    cout << "Value of pNumber: " << *pNumber << endl;
    cout << "Reference: " << ref << endl;

    ref = 42;
    cout << "Reference and Number after change: " << ref << " and " << number << endl;

    cout << "ReturnAge :" << returnAge() << endl;
    cout << "ReturnPowerNumber: " << returnPowerNumber() << endl;



    int* intInHeap = new int(3); //allocates int on the heap(new int returns a memory address already)
    cout << *intInHeap << endl; //dereferencing, 3
    delete intInHeap; //deallocate the memory on the heap

    return 0;
}