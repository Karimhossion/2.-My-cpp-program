#include<iostream>
using namespace std;
class Person
{
    public:
        string name;
        int age;
    void display1()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class Student : public Person
{
    public:
        int id;
    void display2()
    {
        cout<<"Id: "<<id<<endl;
        display1();
    }
};
int main()
{
    Student s1;
    s1.id=231311034;
    s1.name="Arafat";
    s1.age=21;
    s1.display2();
    return 0;
}