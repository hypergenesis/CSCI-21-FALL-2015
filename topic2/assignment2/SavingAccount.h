#include "BankAccount.h"

#ifndef BANK_ACCOUNT_H_
#define BANK_ACCOUNT_H_

class SavingAccount : public BankAccount
{
    public:
    //Constructor
    SavingAccount(per_interest = 0);
    //Destructor
    ~SavingAccount();
    //Getters
    unsigned int GetPerInterest();
    //Setters
    void SetPerInterest(int per_interest);
    //Others
    int AddInterest();
    
    private:
    int per_interest_;
};

#endif