#include <iostream>
using namespace std;
class BankAccount
{
private:
    string accNumber;
    double balance;

public:
    void inputAccountDetails();
    void deposit();
    void withdraw();
    void displayBalance();
};

void BankAccount::inputAccountDetails()
{
    cout << "Enter Account Number: ";
    cin >> accNumber;
    cout << "Enter Initial Balance: ";
    cin >> balance;
    cout << "_____Account created successfull._____" << endl;
}

void BankAccount::deposit()
{
    cout << "Enter Deposit Amount: ";
    double amount;
    cin >> amount;
    balance += amount;
    cout << "_____Deposit successful._____" << endl;
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
    BankAccount myBank;
    myBank.inputAccountDetails();

    myBank.deposit();
    myBank.displayBalance();

    myBank.withdraw();
    myBank.displayBalance();

    return 0;
}
