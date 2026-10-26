#include <iostream>
#include "ecjthing.h"
using namespace std;


int main() {
    
    int number = 32;
    int* pNumber = &number;

    cout << "Number: " << number << endl;
    cout << "Address of number: " << pNumber << endl;
    cout << "Value of pNumber: " << *pNumber << endl;

    cout << "ReturnAge :" << returnAge() << endl;
    cout << "ReturnPowerNumber: " << returnPowerNumber() << endl;

    return 0;
}