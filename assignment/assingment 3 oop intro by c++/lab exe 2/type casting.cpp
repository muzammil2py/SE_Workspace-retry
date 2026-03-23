#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 7.8;

    // Implicit type conversion (automatic)
    float implicitFloat = a;   // int to float automatically
    int implicitInt = b;       // float to int automatically

    // Explicit type conversion (type casting)
    float explicitFloat = (float)a;
    int explicitInt = (int)b;

    cout << "Implicit Type Conversion:" << endl;
    cout << "Integer to Float: " << implicitFloat << endl;
    cout << "Float to Integer: " << implicitInt << endl;

    cout << "\nExplicit Type Conversion:" << endl;
    cout << "Integer to Float: " << explicitFloat << endl;
    cout << "Float to Integer: " << explicitInt << endl;

    return 0;
}