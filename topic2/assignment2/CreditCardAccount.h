#include "BankAccount.h"

#ifndef CREDIT_CARD_H_
#define CREDIT_CARD_H_

class CreditCardAccount : public BankAccount
{
    public:
    //Constructor
    CreditCardAccount(unsigned int money_owed = 0, int fees = 0);
    //Destructor
    ~CreditCardAccount();
    //Getters
    unsigned int GetMoneyOwed();
    int GetFees();
    //Setters
    void SetMoneyOwed(unsigned int money_owed);
    void SetFees(int fees);
    //Others
    
    private:
    unsigned int money_owed_;
    int fees_;
};

#endif