#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    // Arithmetic
    cout << "a+b=" << a+b << " a-b=" << a-b << " a*b=" << a*b << " a/b=" << a/b << " a%b=" << a%b << endl;

    // Relational
    cout << "a>b=" << (a>b) << " a==b=" << (a==b) << endl;

    // Logical
    cout << "AND=" << ((a>b)&&(b<10)) << " OR=" << ((a<b)||(b<10)) << endl;

    // Bitwise
    cout << "a&b=" << (a&b) << " a|b=" << (a|b) << " a<<1=" << (a<<1) << endl;

    return 0;
}
