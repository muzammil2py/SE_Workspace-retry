#include<iostream>
using  namespace std;
class shape
{
    public:

    int a = 10;  
    int b = 20;
    
};
class rectangle : public shape
{
    public:
    void aofr()
    {
        int area_r;

        area_r = shape::a*shape::b;

        cout<<"area of rectangle is:-"<<area_r<<endl;
    }
};
class triangle : public shape
{
    public:
    void aoft()
    {
        int area_t;

        area_t= shape::a*shape::b*1/2;

        cout<<"area of triangle is:-"<<area_t<<endl;

    }
};
class circle : public shape
{
    public:
    void aofc()
    {
        float area_c;
        float pi=3.14;
        area_c= pi*shape::a*shape::a;

        cout<<"area of circlre is="<<area_c<<endl;

    }
};

int main()
{
    rectangle r1;
    r1.aofr();
    triangle t1;
    t1.aoft();
    circle c1;
    c1.aofc();

    return 0;

}