#include<iostream>
using namespace std;
class sum
{
    public:
    int a=10;
    int b=20;
    int add=a+b;
    
    void sumoutput()
    {
        cout<<"the sum is :-"<<add<<endl;

    }
};
int main()
{
    sum s;
    s.sumoutput();
    return 0;

}
