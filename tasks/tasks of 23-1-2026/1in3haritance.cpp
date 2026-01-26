#include<iostream>
using namespace std;
class val_a
{
    public:

    int a=10;

};

class val_b : public val_a
{
    public:

    int b = 20;
};

class val_c : public val_b
{
    public:

    int c = 30;
};

class ans : public val_c
{
   public:

   void sum()
   {
         int add;

         add=val_a::a+val_b::b+val_c::c;

         cout<<"addition of a,b & c is :-"<<add<<endl;

   }

   void subt()
   {

    int sub;

    sub=val_c::c-val_b::b-val_a::a;

    cout<<"subtraction of c,b & a is:-"<<sub<<endl;
   }

   void mult()
   {
    int mul;
    mul=val_a::a*val_b::b*val_c::c;

    cout<<"multiplication of a,b&c is:-"<<mul<<endl;

    }

    void div()
    {
        int division;

        division=val_c::c/val_a::a/val_b::b;
        cout<<"division of c , a & b is:-"<<division<<endl;

    }
};
int main()

{
    ans prt;
    prt.sum();
    prt.subt();
    prt.mult();
    prt.div();

    return 0;
}