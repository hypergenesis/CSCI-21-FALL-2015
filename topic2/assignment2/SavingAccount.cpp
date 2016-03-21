#include "SavingAccount.h"

//Constructor
SavingAccount::SavingAccount(int per_interest)
{
    per_interest_ = per_interest;
}
//Destructor
SavingAccount::~SavingAccount()
{
    
}
//Getters
unsigned int SavingAccount::GetPerInterest()
{
    return per_interest_;
}
//Setters
void SavingAccount::SetPerInterest(int per_interest)
{
    per_interest_ = per_interest;
}
//Others
int SavingAccount::AddInterest()
{
    int money = GetMoney() * (1 + (per_interest_ / 100));
    return money;
}