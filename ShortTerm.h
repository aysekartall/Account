#ifndef SHORTTERM_H_INCLUDED
#define SHORTTERM_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

#include "Account.h"
#include "Bank.h"

using namespace std;

class ShortTerm : public Account
{
public:
    ShortTerm(string fName="",string lName="",int = 0,int=0);
    int getBalance();
    void deposit(int);
    bool withdraw(int);
    int benefit();
private:
    int annualInterest;
};


#endif // SHORTTERM_H_INCLUDED
