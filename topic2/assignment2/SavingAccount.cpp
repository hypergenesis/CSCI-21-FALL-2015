#include "SavingAccount.h"

//Constructor
SavingAccount::SavingAccount(per_interest)
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
    money_ = money_ * (per_interest_ / 100);
}