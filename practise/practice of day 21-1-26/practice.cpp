#include<iostream>
using namespace std;
class persnolinfo
{
    public:
    string myname;
    int myage;

    persnolinfo(string mname, int mage)
    {
        myname = mname;
        myage = mage;

        cout<<"my namre is "<<myname<<endl;
        cout<<"my age is"<<myage<<endl;
    }
};
int main()
{
    persnolinfo info("muzammil",15);
    persnolinfo info2("kaushina",19);
    
 return 0;

}