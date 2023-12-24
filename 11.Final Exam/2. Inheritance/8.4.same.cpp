#include<iostream>
#include<string>
using namespace std;
class Staff
{
    protected:
        int code;
        string name;
    public:
        Staff(int c, string n)
        {
            code=c;
            name=n;
        }
        void display()
        {
            cout<<"Employee Code :"<<code<<endl;
            cout<<"Employee Name :"<<name<<endl;
        }
};
class Teacher : public Staff
{
    private:
        string subject, publication;
    public:
        Teacher(int c, string n, string s, string p):Staff(c,n)
        {
            subject=s;
            publication=p;
        }
        void display()
        {
            cout<<"Teacher Code:"<<code<<endl;
            cout<<"Teacher Name: "<<name<<endl;
            cout<<"Teacher Subject :"<<subject<<endl;
            cout<<"Teacher Publication :"<<publication<<endl;
        }
};
class Officer : public Staff
{
    private:
        string grade;
    public:
        Officer(int c, string n,string g): Staff(c,n)
        {
            grade=g;
        }
        void display()
        {
            cout<<"Officer Code: "<<code<<endl;
            cout<<"Officer Name: "<<name<<endl;
            cout<<"Officer Grade: "<<grade<<endl;
        }
};
class Typist : public Staff
{
    protected:
        int speed;
    public:
        Typist(int c, string n, int s):Staff(c,n)
        {
            speed=s;
        }
        void display()
        {
            cout<<"Typist Code : "<<code<<endl;
            cout<<"Typist Name : "<<name<<endl;
            cout<<"Tpist Speed : "<<speed<<endl;

        }
};
class Regular : public Typist
{
    public:
        Regular(int c, string n, int s):Typist(c,n,s)
        {

        }
        void display()
        {
            cout<<"Regular Typist Code: "<<code<<endl;
            cout<<"Regular Typist Name: "<<name<<endl;
            cout<<"Regular Typist Speed: "<<speed<<endl;
        }
};
class Casual : public Typist
{
    private:
        int daily, wages;
    public:
    Casual(int c, string n,int s, int d, int w):Typist(c,n,s)
    {
        daily=d;
        wages=w;
    }
    void display()
    {
        cout<<"Casual Typist Code :"<<code<<endl;
        cout<<"Casual Typist Name :"<<name<<endl;
        cout<<"Casual Typist Speed : "<<speed<<endl;
        cout<<"Casual Typist Daily Words: "<<daily<<endl;
        cout<<"Casual Typist Wages: "<<wages<<endl;
    }
};
int main()
{
    int code;
    string name,subject,publication,grade;
    int speed,daily,wages;
//teacher
    cout<<"___________Teacher input______________:"<<endl;
    cout<<"Code : "<<code<<"\nName :"<<name<<"\nSubject : "<<subject<<"\nPublication :"<<publication;
    Teacher t(code,name,subject,publication);
//officer
    cout<<"__________Officer input______________:"<<endl;
    cout<<"Code : ";
    cin>>code;
    cout<<"Name : ";
    cin>>name;
    cout<<"Grade : ";
    cin>>grade;
    Officer o(code,name,grade);
//Typist
    cout<<"__________Typist input______________:"<<endl;
    cout<<"Code : ";
    cin>>code;
    cout<<"Name : ";
    cin>>name;
    cout<<"Speed : ";
    cin>>speed;
    Typist p(code,name,speed);
//casual
    cout<<"__________Casual input______________:"<<endl;
    cout<<"Code : ";
    cin>>code;
    cout<<"Name : ";
    cin>>name;
    cout<<"Daily : ";
    cin>>daily;
    cout<<"Wages : ";
    cin>>wages;
    Casual c(code, name, speed, daily, wages);


    cout<<"____________________Teacher information_____________________:"<<endl;
    t.display();



    cout<<"___________________Officer information______________________:"<<endl;
    o.display();

    
    cout<<"___________________Typist Information:______________________:"<<endl;
    p.display();


    cout << "_____________________Casual Information___________________:" << endl;
    c.display();
    return 0;
} 