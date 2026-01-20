#include<iostream>
using namespace std;
class petinfo
{
    public:
    string petname;
    int petage;
    string deseace;
    void showinfo()
    {
        cout<<"your pet's name is:-"<< petname<<endl;
        cout<<"your pet's age is:-"<< petage<<endl;
        cout<<"your pet have this deseace:-"<< deseace<<endl;
    }
};
int main()
{
    string pn1;
    int pa1;
    string d;
    cout<<"\n enter your pet's name:-";
    cin>>pn1;
    cout<<"\n enter your pet's age:-";
    cin>>pa1;
    cout<<"\n enter your pet's deseace:-";
    cin>>d;
    petinfo pet;
    pet.petname=pn1;
    pet.petage=pa1;
    pet.deseace=d;
    pet.showinfo();
    return 0;
}