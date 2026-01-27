#include<iostream>
using namespace std;
class shape
{
    public:
    float a;
    float b;
     
    
};
class input : public shape
{
    public:
    void inputval()
    {
        cout<<"Enter the integer a's value:-"<<endl;
        cin>>a;
        cout<<"Enter the integer b's value:-"<<endl;
        cin>>b;
    }
};
class rectangle : public shape  
{
    public:
    void aofr()
    {
        cout<<"area of rectangle :-  "<<a*b;
    }
};
class circle : public shape 
{
    public:
    void aofc()
    {
        float pi=3.14;
        cout<<"area fo the circle is:-"<<pi*a*a;
    }
};

class triangle : public shape
{
    public:
    void soft()
    {
        cout<<" area of triangle is :-"<<(a*b)/2;

    }
    
};
int main()
{

    input i;
    i.inputval();
    
    rectangle r;
    r.aofr();

    circle c;
    c.aofc();

    triangle t;
    t.soft();

    return 0;
    
}
