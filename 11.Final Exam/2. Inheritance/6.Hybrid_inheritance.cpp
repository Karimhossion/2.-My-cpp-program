#include<iostream>
using namespace std;
class Animal
{
    public:
        Animal()
        {
            cout<<"This is an Animal"<<endl;
        }
};
class Cat: public Animal
{
    public:
        Cat()
        {
            cout<<"This is Cat"<<endl;
        }
};
class Pet 
{
    public:
        Pet()
        {
            cout<<"This is an Pet"<<endl;
        }
};
class Kitty : public Cat, public Pet
{
    public:
        Kitty()
        {
            cout<<"This is Kitty"<<endl;
        }
};
int main()
{
    Kitty obj;
    
    return 0;
}