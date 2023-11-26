/*5. Make a class named Fruit with a data member to calculate the number of fruits in a
basket. Create two other class named Apples and Mangoes to calculate the number
of apples and mangoes in the basket. Print the number of fruits of each type and the
total number of fruits in the basket.*/
#include <iostream>
using namespace std;
class Fruit
{
private:
    int fruitsNumber;

public:
    void setValue(int f)
    {
        fruitsNumber = f;
    }
    int totalFruit()
    {
        return fruitsNumber;
    }
};
class Apples : public Fruit
{
private:
    int appleNumber;

public:
    void setApple(int a)
    {
        appleNumber = a;
    }
    int totalApple()
    {
        return appleNumber;
    }
};
class Mangoes : public Fruit
{

private:
    int mangoNumber;

public:
    void setMango(int m)
    {
        mangoNumber = m;
    }
    int totalMango()
    {
        return mangoNumber;
    }
};