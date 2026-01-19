#include<iostream>
using namespace std;
int main() 
{
    int r, c, num;
    char a = 'A';
    cout << "Enter a number: ";
    cin >> num;
    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << a << " ";
            a++;
            cout << endl;
        }
        
    }
    return 0;

}