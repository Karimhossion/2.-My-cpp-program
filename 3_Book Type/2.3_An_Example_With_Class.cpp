#include<iostream>
using namespace std;
class person
{
private:
    char name[30];
    int age;
public:
    void getdata();
    void putdata();
};

void person::getdata(void)
{
    cout<<"Enter the Name:";
    cin>>name;
    cout<<"Enter the Age:";
    cin>>age;
}

void person::putdata(void)
{
    cout<<"_____________Person Details:_______________"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
}
int main()
{
    person x;
    x.getdata();
    x.putdata();

    return 0;
}
