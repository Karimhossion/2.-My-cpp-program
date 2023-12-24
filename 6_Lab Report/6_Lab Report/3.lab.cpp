/* 3.  Write a C++ program that have a class that have 3 overloaded constructors like STUDENT(int id, String name, String dept, String section),
STUDENT(int id, String name, String dept), STUDENT(int id, String name, double CGPA). That value is takes as input in main function and pass 
that value in that 3 constructor, and three functions display1stConstructorInfo( ), display2ndConstructorInfo( ) & display3rdConstructorInfo()
that display the values.*/
#include <iostream>
using namespace std;
class Student{
    private:
        int id;
        string name;
        string dept;
        double CGPA;
        string section;
    public:
        Student(int id, string name, string dept, string section){
            this->id = id;
            this->name = name;
            this->dept = dept;
            this->section = section;
        }
        Student(int id, string name, string dept){
            this->id = id;
            this->name = name;
            this->dept = dept;
        }
        Student(int id, string name, double CGPA){
            this->id = id;
            this->name = name;
            this->CGPA = CGPA;
        }

        void display1stConstructorInfo(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Department: " << dept << endl;
            cout << "Section: " << section << endl;
        }
        void display2ndConstructorInfo(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Department: " << dept << endl;
        }
        void display3rdConstructorInfo(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "CGPA: " << CGPA << endl;
        }
};
int main()
{ 
    int id;
    string name,dept,section;
    double CGPA;

    cout<<"Student Details 1 :"<<endl;
    cout<<"Id : ";
    cin>>id;
    cout<<"Name : ";
    cin>>name;
    cout<<"Department : ";
    cin>>dept;
    cout<<"Section : ";
    cin>>section;
    Student s1(id,name,dept,section);

    cout<<"Student Details 2 :"<<endl;
    cout<<"Id : ";
    cin>>id;
    cout<<"Name : ";
    cin>>name;
    cout<<"Department : ";
    cin>>dept;
    Student s2(id,name,dept);

    cout<<"Student Details 3 :"<<endl;
    cout<<"Id : ";
    cin>>id;
    cout<<"Name : ";
    cin>>name;
    cout<<"CGPA : ";
    cin>>CGPA;
    Student s3(id,name, CGPA);

    s1.display1stConstructorInfo();
    s2.display2ndConstructorInfo();
    s3.display3rdConstructorInfo();

    return 0;
}




/*
#include <iostream>
using namespace std;
class Student{
    private:
        int id;
        string name;
        string dept;
        double CGPA;
    public:
        Student(int id, string name, string dept, double CGPA){
            this->id = id;
            this->name = name;
            this->dept = dept;
            this->CGPA = CGPA;
        }
        Student(int id, string name, string dept){
            this->id = id;
            this->name = name;
            this->dept = dept;
        }
        Student(int id, string name, double CGPA){
            this->id = id;
            this->name = name;
            this->CGPA = CGPA;
        }

        void display1stConstructorInfo(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Department: " << dept << endl;
            cout << "CGPA: " << CGPA << endl;
        }
        void display2ndConstructorInfo(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Department: " << dept << endl;
        }
        void display3rdConstructorInfo(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "CGPA: " << CGPA << endl;
        }
};
int main()
{ 
    Student s1(1, "John", "CSE", 3.8);
    s1.display1stConstructorInfo();
    Student s2(2, "Jane", "CSE");
    s2.display2ndConstructorInfo();
    Student s3(3, "Jack", 3.9);
    s3.display3rdConstructorInfo();

    return 0;
}
*/