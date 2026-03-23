#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;   // private data member

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited. Balance = " << balance << endl;
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn. Balance = " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }

    void showBalance()
    {
        cout << "Current Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.deposit(500);
    b.withdraw(200);
    b.showBalance();

    return 0;
}
