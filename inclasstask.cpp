#include<iostream>
using namespace std;
class Student
{
    //global
    public:
    int id=0;
    string name="";
    
    //this keyword it will be use for refrence passing
    Student(int id,string name)
    {
        this->id = id;
        this->name = name;
    }
    
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }

};

int main()
{
    int id1,id2;
    string name1,name2;
    
    cout<<"Enter Your id: ";
    cin>>id1;
     
    cout<<"Enter Your name: ";
    cin>>name1;
     
    cout<<"Enter Your id: ";
    cin>>id2;
     
    cout<<"Enter Your name: ";
    cin>>name2;
    
    Student s1 = Student(id1,name1);
    Student s2 = Student(id2,name2);
    
    s1.display();
    s2.display();
   
    
    
    return 0;
}