#include<iostream>
using namespace std;
class worker 
{
    public:
    string name; 
    float salary;

    void display()
    {
        cout<<name<<" "<<salary<<endl;
    }

};
int main()
{
    string name1;
    float salary1;

    cout<<"\n Enter your nmae:-";
    cin>>name1;
    cout<<"\n Enter your salary:-";
    cin>>salary1;

    worker w1;
    w1.name=name1;
    w1.salary=salary1;
    w1.display();

    if(salary1>=50000)
    {
        cout<<"\n your salary is good";
    }
    else if(salary1>=40000)
    {
        cout<<"\n your salary is average";
    }
    else if(salary1>=30000)
    {
        cout<<"\n your salary is below average";
    }
    else
    {
        cout<<"\n your salary is low";
    }
    return 0;
}