#include<iostream>
using namespace std;
class a
{
    public:

    int val_a;

};
class b :public a 
{
    public:

    int val_b;
};
class c : public b
{
    public:

    int val_c;

};
class input : public c
{
    public:

    void userkainput()
    {
        cout<<"enter the value of intiger a :-"<<endl;
        cin>>a::val_a; 
        cout<<" enter value of intiger b :-"<<endl;
        cin>>b::val_b;
        cout<<"enter the value of intger c :-"<<endl;
        cin>>c::val_c;
    }

};
class ans : public input 
{
    public:

    void sum()
    {

        cout<<"the sum of every value is :-"<<a::val_a+b::val_b+c::val_c<<endl;

    }
    void minus()
    {
        cout<<"the subtraction of every value is :-"<<c::val_c - b::val_b<<endl;

    }
    void multiplication()
    {
        cout<<"multiplication of every value is :-"<<a::val_a*b::val_b*c::val_c<<endl;
    }
    void division()
    {
        cout<<"division of every vbal is :-"<<c::val_c / a::val_a / b::val_b<<endl;

    }
};
int main()
{
    input i;
    i.userkainput();
    ans a;
    a.sum();
    a.minus();
    a.multiplication();
    a.division();
}