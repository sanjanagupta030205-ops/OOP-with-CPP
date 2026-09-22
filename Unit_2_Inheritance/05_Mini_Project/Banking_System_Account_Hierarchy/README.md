Name: Sanjana Gupta 
Roll.no:AD2545
Div:E
# Banking System with Account Hierarchy

## Unit 2: Inheritance

### Mini Project

The Banking System with Account Hierarchy is a C++ mini-project
that demonstrates the practical use of inheritance and
polymorphism in a banking application.

---

## 1. Objective

The objective of this project is to create a simple banking
system using a hierarchy of account classes.

The project demonstrates how a common base class can be used
for different types of bank accounts.

---

## 2. Account Hierarchy

The project contains one base class and three derived classes.

### Base Class

Account

### Derived Classes

1. SavingsAccount
2. CurrentAccount
3. FixedDepositAccount

The hierarchy can be represented as:

                    Account
                       |
          ---------------------------
          |            |            |
     SavingsAccount CurrentAccount FixedDepositAccount

---

## 3. Features

The banking system provides the following features:

- Store account number.
- Store account holder name.
- Store account balance.
- Deposit money.
- Withdraw money.
- Calculate account-specific interest.
- Display account information.
- Demonstrate inheritance.
- Demonstrate function overriding.
- Demonstrate an abstract base class.

---

## 4. OOP Concepts Used

### 4.1 Inheritance

The SavingsAccount, CurrentAccount and
FixedDepositAccount classes inherit common properties
and functions from the Account class.

---

### 4.2 Base Class

Account is the base class.

It contains common information such as:

- Account number
- Holder name
- Balance

It also provides common banking operations.

---

### 4.3 Derived Classes

The following classes are derived from Account:

- SavingsAccount
- CurrentAccount
- FixedDepositAccount

Each derived class provides its own implementation
of interest calculation.

---

### 4.4 Protected Members

The common account information is stored using protected
members so that derived classes can access them.

---

### 4.5 Function Overriding

The calculateInterest() function is declared as a
pure virtual function in the Account class.

Each derived class overrides this function.

---

### 4.6 Abstract Class

Account is an abstract class because it contains the
pure virtual function:

calculateInterest()

An object of the Account class cannot be created directly.

---

### 4.7 Constructor

Each account class uses a constructor to initialize
account information.

---

### 4.8 Polymorphism

The calculateInterest() function demonstrates
polymorphic behavior because different account classes
provide their own implementation.

---

## 5. File Structure

```text
Banking_System_Account_Hierarchy
│
├── main.cpp
│
└── README.md