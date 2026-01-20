#include<iostream>
using namespace std;
class std
{
    public:
    string name;
    int roll_no;
    void display()
    {
        cout<<name<<" "<<roll_no<<endl;
    }
};
int main()
{
    string name1;
    int roll_no1;
    cout<<"\n enter your name :-";
    cin>>name1;
    cout<<"\n enter your roll no :-";
    cin>>roll_no1;
    std student;
    student.name=name1;
    student.roll_no=roll_no1;
    student.display();
}