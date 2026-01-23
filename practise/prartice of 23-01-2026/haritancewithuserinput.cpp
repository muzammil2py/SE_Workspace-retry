#include<iostream>
using namespace std;
class shape
{
    public:
    int a;
    int b;
     
    void input()
    {
        cout<<"Enter the intiger a's value:-"<<endl;
        cin>>a;
        cout<<"Enter the intiger b's value:-"<<endl;
        cin>>b;

        if(true)
        {
            cout<<"you entered the value successfully"<<endl;
        
        }
        else
        {
            cout<<"your value has some errors please check the value befor entering the value"<<endl;

        }
    };
};
class rectangle :public shape
{
    public:
    void aofr()
    {
        int  area_r;

        area_r = shape::a*shape::b;

        cout<<"area of rectangle is:-"<<area_r<<endl;

    }
};
class circle : public shape
{
    public:
    void aofc()
    {
        float area_circle;
        float pi=3.14;

        area_circle = pi*shape::a*shape::b;

        cout<<"area fo the circle is:-"<<area_circle<<endl;

    }
};

class triangle : public shape
{
    public:
    void soft()
    {
        int area_of_triangle;

        area_of_triangle = shape::a*shape::b*1/2;

        cout<<" area of triangle is :-"<<area_of_triangle<<endl;

    }
    
};
int main()
{
    shape s;
    s.input();

    rectangle r;
    r.aofr();

    circle c;
    c.aofc();

    triangle t;
    t.soft();

    return 0;
    
}
