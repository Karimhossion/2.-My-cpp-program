/*5. Make a class named Fruit with a data member to calculate the number of fruits in a
basket. Create two other class named Apples and Mangoes to calculate the number
of apples and mangoes in the basket. Print the number of fruits of each type and the
total number of fruits in the basket.*/

#include <iostream>
using namespace std;

class Apple
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

class Mango
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
class Fruit : public Apple, public Mango
{
private:
    int num;

public:
    void putApple(int applex)
    {
        setApple(applex);
    }
    void putMango(int mangox)
    {
        setMango(mangox);
    }
    int totalFruit()
    {
        return totalApple() + totalMango();
    }
};
int main()
{

    Fruit basket;
    int apple, mango;
    cout << "Number of Apple: ";
    cin >> apple;
    cout << "Number of Mango: ";
    cin >> mango;
    basket.putApple(apple);
    basket.putMango(mango);

    cout << "Apple: " << basket.totalApple() << endl;
    cout << "Mango: " << basket.totalMango() << endl;
    cout << "the total number of fruits in the basket: " << basket.totalFruit() << endl;
    return 0;
}