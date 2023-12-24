/* Define a base class Animal with a method makeSound(). Create a derived class Dog inheriting from Animal. 
Implement the makeSound() method in both classes to display different sounds for the dog and the animal.*/
#include <iostream>
using namespace std;
class Animal
{

public:
    virtual void makeSound()
    {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal
{

public:
    void makeSound()
    {
        cout << "Dog sound" << endl;
    }
};
int main()
{
    Dog d;
    d.makeSound();
    d.Animal::makeSound();
    return 0;
}