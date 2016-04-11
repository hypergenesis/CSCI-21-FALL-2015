#include "BankAccount.h"
#include "CheckingAccount.h"
#include "CreditCardAccount.h"
#include "SavingAccount.h"


int main ()
{
    CheckingAccount User_Checking;
    CreditCardAccount User_Credit;
    SavingAccount User_Saving;
    
    string name;
    int money;
    int PIN;
    int account_number;
    int per_interest;
    
    cout << "What is your name?" << endl;
    cin >> name;
    
    User_Checking.SetName(name);
    User_Credit.SetName(name);
    User_Saving.SetName(name);
    
    cout << "What is your (universal) PIN?" << endl;
    cin >> PIN;
    
    User_Checking.SetPIN(PIN);
    User_Saving.SetPIN(PIN);
    User_Credit.SetPIN(PIN);
    
    cout << "What is your (universal) account number?" << endl;
    cin >> account_number;
    
    User_Checking.SetAccountNumber(account_number);
    User_Credit.SetAccountNumber(account_number);
    User_Saving.SetAccountNumber(account_number);
    
    cout << "How much money is in your checkings account?" << endl;
    cin >> money;
    
    User_Checking.SetMoney(money);
    
    cout << "How much money is in your savings account?" << endl;
    cin >> money;
    
    User_Saving.SetMoney(money);
    
    cout << "What is your percent interest (in percent, not decimal)?" << endl;
    cin >> per_interest;
    
    User_Saving.SetPerInterest(per_interest);
    
    cout << "After adding interest you have " << User_Saving.AddInterest() << endl;
    
    cout << "How much money is in your credit account?" << endl;
    cin >> money;
    
    User_Credit.SetMoney(money);
}