#include "BankAccount.h"

BankAccount::BankAccount(int money, string bank, string name, int account_number, int PIN)
{
    money_ = money;
    bank_ = bank;
    name_ = name;
    account_number_ = account_number;
    PIN_ = PIN;
}

BankAccount::~BankAccount()
{
    
}

//Getters
int BankAccount::GetMoney()
{
    return money_;
}
string BankAccount::GetBank()
{
    return bank_;
}
string BankAccount::GetName()
{
    return name_;
}
int BankAccount::GetAccountNumber()
{
    return account_number_;
}
int BankAccount::GetPIN()
{
    return PIN_;
}

//Setters
void BankAccount::SetMoney(int money)
{
    money_ = money;
}
void BankAccount::SetBank(string bank)
{
    bank_ = bank;
}
void BankAccount::SetName(string name)
{
    name_ = name;
}
void BankAccount::SetAccountNumber(int account_number)
{
    account_number_ = account_number;
}
void BankAccount::SetPIN(int PIN)
{
    PIN_ = PIN;
}

//Others
void BankAccount::Withdraw(unsigned int money)
{
    money_ = money_ - money;
}
void BankAccount::Deposit(unsigned int money)
{
    money_ = money_ + money;
}