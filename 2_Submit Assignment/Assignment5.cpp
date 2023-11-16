/*5. Write a C++ program to implement a class called BankAccount that has private member variables
for account number and balance. Include member functions to deposit and withdraw money from
the account.*/

#include <iostream>
using namespace std;
class BankAccount
{
private:
    string accountnumber;
    double balance;

public:
    void inputAccount();
    void deposit();
    void withdraw();
    void displayBalance();
};

void BankAccount::inputAccount()
{
    cout << "Enter Account Number: ";
    cin >> accountnumber;
    cout << "Enter Initial Balance: ";
    cin >> balance;
    cout << "_____Account created successfully._____" << endl;
}

void BankAccount::deposit()
{
    cout << "Enter Deposit Amount: ";
    double amount;
    cin >> amount;
    balance += amount;
    cout << "_____Deposit successfully._____" << endl;
}

void BankAccount::withdraw()
{
    cout << "Enter Withdrawal Amount: ";
    double amount;
    cin >> amount;

    if (balance < amount)
    {
        cout << "Insufficient Balance" << endl;
    }
    else
    {
        balance -= amount;
        cout << "_______Withdrawal successful.______" << endl;
    }
}

void BankAccount::displayBalance()
{
    cout << "Account Balance: " << balance << endl;
}

int main()
{
    BankAccount x;
    x.inputAccount();

    x.deposit();
    x.displayBalance();

    x.withdraw();
    x.displayBalance();

    return 0;
}
