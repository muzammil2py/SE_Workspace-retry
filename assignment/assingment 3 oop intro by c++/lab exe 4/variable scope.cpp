#include <iostream>
using namespace std;

int g = 10;   // Global variable

void show()
{
    int l = 5;   // Local variable
    cout << "Inside function:" << endl;
    cout << "Global g = " << g << endl;
    cout << "Local l = " << l << endl;
}

int main()
{
    cout << "Inside main:" << endl;
    cout << "Global g = " << g << endl;

    // cout << l;   // This would give error (l is not accessible here)

    show();
    return 0;
}
