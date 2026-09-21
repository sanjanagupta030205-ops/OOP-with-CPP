// Program: Banking System with Account Hierarchy
// Unit 2: Inheritance
// Mini Project: Banking Account Management System

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Account is the BASE CLASS.
class Account
{
protected:
    // Common information for all bank accounts.
    string accountNumber;
    string holderName;
    double balance;

public:
    // Constructor of the base Account class.
    Account(string number, string name, double initialBalance)
        : accountNumber(number),
          holderName(name),
          balance(initialBalance)
    {
    }

    // Function to deposit money into the account.
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;

            cout << "Deposited: Rs. "
                 << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Virtual function for withdrawing money.
    // Derived classes can provide their own behavior.
    virtual void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;

            cout << "Withdrawn: Rs. "
                 << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount."
                 << endl;
        }
    }

    // Pure virtual function.
    // Each derived account must calculate interest
    // according to its own rules.
    virtual double calculateInterest() const = 0;

    // Function to display common account information.
    void displayAccountInfo() const
    {
        cout << "Account Number: "
             << accountNumber << endl;

        cout << "Holder Name: "
             << holderName << endl;

        cout << "Balance: Rs. "
             << balance << endl;
    }

    // Virtual destructor.
    virtual ~Account() = default;
};

// SavingsAccount is derived from Account.
class SavingsAccount : public Account
{
private:
    // Annual interest rate for savings account.
    double interestRate;

public:
    // Constructor of SavingsAccount.
    SavingsAccount(string number, string name,
                   double initialBalance, double rate)
        : Account(number, name, initialBalance),
          interestRate(rate)
    {
    }

    // Calculate interest for SavingsAccount.
    double calculateInterest() const override
    {
        return balance * interestRate / 100;
    }

    // Display savings account information.
    void display() const
    {
        cout << "=== Savings Account ===" << endl;

        displayAccountInfo();

        cout << "Interest Rate: "
             << interestRate << "%" << endl;

        cout << "Calculated Interest: Rs. "
             << calculateInterest() << endl;
    }
};

// CurrentAccount is derived from Account.
class CurrentAccount : public Account
{
private:
    // Annual interest rate for current account.
    double interestRate;

public:
    // Constructor of CurrentAccount.
    CurrentAccount(string number, string name,
                   double initialBalance, double rate)
        : Account(number, name, initialBalance),
          interestRate(rate)
    {
    }

    // Calculate interest for CurrentAccount.
    double calculateInterest() const override
    {
        return balance * interestRate / 100;
    }

    // Display current account information.
    void display() const
    {
        cout << "=== Current Account ===" << endl;

        displayAccountInfo();

        cout << "Interest Rate: "
             << interestRate << "%" << endl;

        cout << "Calculated Interest: Rs. "
             << calculateInterest() << endl;
    }
};

// FixedDepositAccount is derived from Account.
class FixedDepositAccount : public Account
{
private:
    // Annual interest rate for fixed deposit.
    double interestRate;

public:
    // Constructor of FixedDepositAccount.
    FixedDepositAccount(string number, string name,
                        double initialBalance, double rate)
        : Account(number, name, initialBalance),
          interestRate(rate)
    {
    }

    // Calculate interest for FixedDepositAccount.
    double calculateInterest() const override
    {
        return balance * interestRate / 100;
    }

    // Display fixed deposit account information.
    void display() const
    {
        cout << "=== Fixed Deposit Account ===" << endl;

        displayAccountInfo();

        cout << "Interest Rate: "
             << interestRate << "%" << endl;

        cout << "Calculated Interest: Rs. "
             << calculateInterest() << endl;
    }
};

int main()
{
    // Create a Savings Account.
    SavingsAccount savings(
        "SA001",
        "Rahul",
        50000,
        4.0
    );

    // Create a Current Account.
    CurrentAccount current(
        "CA001",
        "Priya",
        75000,
        2.0
    );

    // Create a Fixed Deposit Account.
    FixedDepositAccount fixedDeposit(
        "FD001",
        "Amit",
        100000,
        7.0
    );

    // Perform a deposit operation.
    cout << "=== Savings Account Transaction ===" << endl;

    savings.deposit(10000);

    // Perform a withdrawal operation.
    savings.withdraw(5000);

    cout << endl;

    // Display Savings Account details.
    savings.display();

    cout << endl;

    // Display Current Account details.
    current.display();

    cout << endl;

    // Display Fixed Deposit Account details.
    fixedDeposit.display();

    // Return 0 means successful program execution.
    return 0;
}