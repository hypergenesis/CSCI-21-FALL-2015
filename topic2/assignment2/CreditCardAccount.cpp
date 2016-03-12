#include "CreditCardAccount.h"

//Constructor
CreditCardAccount::CreditCardAccount(unsigned int money_owed, int fees)
{
    money_owed_ = money_owed;
    fees_ = fees;
}
//Destructor
CreditCardAccount::~CreditCardAccount()
{
    
}
//Getters
unsigned int CreditCardAccount::GetMoneyOwed()
{
    return money_owed_;
}
int CreditCardAccount::GetFees()
{
    return fees_;
}
//Setters
void CreditCardAccount::SetMoneyOwed(unsigned int money_owed)
{
    money_owed_ = money_owed;
}
void CreditCardAccount::SetFees(int fees)
{
    fees_ = fees;
}