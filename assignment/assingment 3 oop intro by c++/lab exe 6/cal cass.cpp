#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    float divide(int a, int b)
    {
        return (float)a / b;
    }
};

int main()
{
    Calculator c;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition: " << c.add(a, b) << endl;
    cout << "Subtraction: " << c.subtract(a, b) << endl;
    cout << "Multiplication: " << c.multiply(a, b) << endl;
    cout << "Division: " << c.divide(a, b) << endl;

    return 0;
}