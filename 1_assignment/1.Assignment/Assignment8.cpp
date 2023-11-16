#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;

public:
    void inputDate();
    void displayDate();
    bool isValid();
};

void Date::inputDate()
{
    cout << "Enter The Day: ";
    cin >> day;
    cout << "Enter The Month: ";
    cin >> month;
    cout << "Enter The Year: ";
    cin >> year;
}

void Date::displayDate()
{
    cout << "Date: " << day << "-" << month << "-" << year << endl;
}

bool Date::isValid()
{
    if (day > 0 && day <= 31 && month > 0 && month <= 12 && year > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Date dateObj;

    dateObj.inputDate();
    if (dateObj.isValid())
    {
        dateObj.displayDate();
    }
    else
    {
        cout << "Invalid Date" << endl;
    }

    return 0;
}
