#include<iostream>
using namespace std;
class pet
{
    public:
    string name;
    int age;
    
    pet(string pname, int page)
    {
        name = pname;
        age = page;
    }
    void output()
    {
        cout<<"your pet's name is :-"<<name<<endl;
        cout<<"your pet is "<<age<<"years old"<<endl;
    }

};
int main()
{
    string petname;
    int  petage;

    cout<<"enter the name of your pet"<<endl;
    cin>>petname;
    cout<<"enter the age  of you pet in years "<<endl;
    cin>>petage;

    pet outpet(petname,petage);
    outpet.output();
    return 0;
}