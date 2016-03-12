/*
 * Name        : BankAccount.h
 * Author      : River Roseveare-Hunt
 * Description : Follows instructions.
 */

#ifndef BANKACC_H_
#define BANKACC_H_

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class BankAccount 
{
  public://contructor and destructor
    BankAccount(int money = 0, string bank = "Generic Bank", string name = "James", int account_number = 0, int PIN = 0);
    ~BankAccount();
    //Getters
    int GetMoney();
    string GetBank();
    string GetName();
    int GetAccountNumber();
    int GetPIN();
    
    //Setters
    void SetMoney(int money);
    void SetBank(string bank);
    void SetName(string name);
    void SetAccountNumber(int account_number);
    void SetPIN(int PIN);
    
    //Others
    void Withdraw(unsigned int money);
    void Deposit(unsigned int money);
    
  private://values for base class
  
    int money_;
    string bank_;
    string name_;
    int account_number_;
    int PIN_;
};

#endif