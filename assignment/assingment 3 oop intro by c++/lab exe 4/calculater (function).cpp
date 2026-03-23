#include <iostream>
using namespace std;

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

int main()
{
    int a, b, choice; 

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1-Add  2-Subtract  3-Multiply  4-Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
        cout << "Result: " << add(a, b);
    else if (choice == 2)
        cout << "Result: " << subtract(a, b);
    else if (choice == 3)
        cout << "Result: " << multiply(a, b);
    else if (choice == 4)
        cout << "Result: " << divide(a, b);
    else
        cout << "Invalid choice";

    return 0;
}
