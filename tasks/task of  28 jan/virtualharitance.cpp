#include<iostream>
using namespace std;
class rbi
{
    public:
    virtual void intrest()
    {
        
        cout<<"rbi's intrest is 7 prcent"<<endl;
    }
};
class sbi : virtual public rbi
{
    public:
    void intrest()
    {
        cout<<"sbi's intrest is 8 prcent"<<endl;
    }  
};
class icici : virtual public rbi
{
    public:
    void intrest()
    {
        cout<<"icici's intrest is 9 prcent"<<endl;
    }  
};
class axis : public sbi,public icici
{
    public:
    void intrest()
    {
        cout<<"axis's intrest is 10 prcent"<<endl;
    }  
};
int main()
{
    rbi r;
    sbi s;
    icici i;
    axis a;

    r.intrest();
    s.intrest();
    i.intrest();
    a.intrest();

    
    return 0;
}