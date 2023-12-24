/*Create a class called Person with a constructor that takes parameters name and age.
Implement constructor overloading to handle cases where either both name and age are
provided or only name is provided with age defaulting to 0.
*/
#include<iostream>
#include<string>
using namespace std;
class Person
{
    private:
        string name;
        int age;
    public:
        Person(string n, int a)
        {
            name=n;
            age=a;
        }
        Person(string n)
        {
            name=n;
            age=0;
        }
        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
};
int main()
{
    string name1;
    int age1;
    cout<<"First Person : "<<endl;
    cout<<"Name : ";
    cin>>name1;
    cout<<"Age : ";
    cin>>age1;

    string name2;
    cout<<"Second Person : "<<endl;
    cout<<"Name : ";
    cin>>name2;

    Person p1(name1,age1);
    Person p2(name2);

    p1.display();
    p2.display();
    return 0;
}























/*
#include <iostream>
using namespace std;
class Person
{
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    Person(string n)
    {
        name = n;
        age = 0;
    }
    void display()
    {
        cout << name << " " << age << endl;
    }
};
int main()
{
    Person p1("John", 25);
    Person p2("Jane");
    p1.display();
    p2.display();
    return 0;
}
*/