#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    string rev = "";

    cout << "Enter a string: ";
    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev = rev + s[i];
    }

    if (s == rev)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}