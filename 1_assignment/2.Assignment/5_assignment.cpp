/*5. Make a class named Fruit with a data member to calculate the number of fruits in a
basket. Create two other class named Apples and Mangoes to calculate the number
of apples and mangoes in the basket. Print the number of fruits of each type and the
total number of fruits in the basket.*/

#include <iostream>
using namespace std;

class Apples
{
private:
    int applesNumber;

public:
    void setApples(int a)
    {
        applesNumber = a;
    }
    int totalApples()
    {
        return applesNumber;
    }
};

class Mangoes
{

private:
    int mangoesNumber;

public:
    void setMangoes(int m)
    {
        mangoesNumber = m;
    }
    int totalMangoes()
    {
        return mangoesNumber;
    }
};
class Fruit : public Apples, public Mangoes
{
private:
    int num;

public:
    void putApples(int a)
    {
        setApples(a);
    }
    void putMangoes(int m)
    {
        setMangoes(m);
    }
    int totalFruit()
    {
        return totalApples() + totalMangoes();
    }
};
int main()
{

    Fruit basket;
    int apples, mangoes;
    cout << "Number of Apple: ";
    cin >> apples;
    cout << "Number of Mango: ";
    cin >> mangoes;
    basket.putApples(apples);
    basket.putMangoes(mangoes);

    cout << "Apple: " << basket.totalApples() << endl;
    cout << "Mango: " << basket.totalMangoes() << endl;
    cout << "the total number of fruits in the basket: " << basket.totalFruit() << endl;
    return 0;
}