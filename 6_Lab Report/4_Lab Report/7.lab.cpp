/*7. Write a program to represent a bank account. Include the following members: Name of the depositor, Account number, Type of account, Balance amount.
 Member functions: To assign initial values, to deposit an amount, to withdraw an amount after checking balance, to display name and balance.
 */
#include <iostream>
using namespace std;

class BankAccount
{

private:
    string name;
    string account_number;
    string type_of_account;
    double balance;

public:
    BankAccount(string name, string account_number, double balance = 0, string type_of_account = "Saving")
    {
        this->name = name;
        this->balance = balance;
        this->type_of_account = type_of_account;
        this->account_number = account_number;
    }
    void setInitBalance(double balance)
    {
        this->balance = balance;
    }
    void deposite(double amount)
    {
        this->balance += amount;
    }
    void withdraw(double amount)
    {
        if (amount > this->balance)
        {
            cout << "Insufficient Balance" << endl;
            return;
        }
        this->balance -= amount;
    }
    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Account Number: " << this->account_number << endl;
        cout << "Type of Account: " << this->type_of_account << endl;
        cout << "Balance: " << this->balance << endl;
    }
};

int main()
{
    BankAccount b1("Karim", "100"), b2("Arafat", "101");
    b1.setInitBalance(1000);
    b2.setInitBalance(2000);
    b1.deposite(500);
    b1.display();
    cout << "------------------" << endl;
    b2.withdraw(500);
    b2.display();
    return 0;
}
/*
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    string account_number;
    string type_of_account;
    double balance;

public:
    // Constructor with default values for balance and type_of_account
    BankAccount(string n, string a, double b = 0, string t = "Saving")
    {
        name = n;
        balance = b;
        type_of_account = t;
        account_number = a;
    }

    void setInitBalance(double balance)
    {
        this->balance = balance;
    }

    void deposit(double amount)
    {
        this->balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > this->balance)
        {
            cout << "Insufficient Balance" << endl;
            return;
        }
        this->balance -= amount;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Type of Account: " << type_of_account << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    string name1, account_number1, name2, account_number2;
    double initial_balance1, initial_balance2;

    cout << "Enter first account:" << endl;
    cout << "Name: ";
    cin >> name1;
    cout << "Account Number: ";
    cin >> account_number1;
    cout << "Initial Balance: ";
    cin >> initial_balance1;

    cout << "Enter second account:" << endl;
    cout << "Name: ";
    cin >> name2;
    cout << "Account Number: ";
    cin >> account_number2;
    cout << "Initial Balance: ";
    cin >> initial_balance2;

    BankAccount b1(name1, account_number1, initial_balance1);
    BankAccount b2(name2, account_number2, initial_balance2);

    b1.deposit(500);
    b1.display(); 
    b2.withdraw(500);
    b2.display();

    return 0;
}

*/