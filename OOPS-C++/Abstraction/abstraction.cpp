#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance; // Internal representation of balance

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance = 0) : balance(initialBalance) {}

    // Function to deposit money into the account
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << " into the account." << endl;
        }
        else
        {
            cout << "Invalid deposit amount. Amount must be greater than zero." << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from the account." << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount. Amount must be greater than zero and less than or equal to the account balance." << endl;
        }
    }

    // Function to display the account balance
    double checkBalance() const
    {
        return balance;
    }
};

int main()
{
    // Creating a bank account
    BankAccount account(1000);

    // Depositing and withdrawing money
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(1500);

    // Checking the balance
    double currentBalance = account.checkBalance();
    cout << "Current balance: $" << currentBalance << endl;

    return 0;
}