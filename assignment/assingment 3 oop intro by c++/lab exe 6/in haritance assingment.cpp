#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
public:
    int rollNo;

    void getStudent()
    {
        getPerson();   // reusing base class function
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void showStudent()
    {
        showPerson();  // reusing base class function
        cout << "Roll No: " << rollNo << endl;
    }
};

class Teacher : public Person
{
public:
    string subject;

    void getTeacher()
    {
        getPerson();   // reusing base class function
        cout << "Enter subject: ";
        cin >> subject;
    }

    void showTeacher()
    {
        showPerson();  // reusing base class function
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    cout << "Student Details:\n";
    s.getStudent();
    s.showStudent();

    cout << "\nTeacher Details:\n";
    t.getTeacher();
    t.showTeacher();

    return 0;
}
