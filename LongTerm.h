#ifndef LONGTERM_H_INCLUDED
#define LONGTERM_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

#include "Account.h"
#include "Bank.h"

using namespace std;

class LongTerm : public Account
{
public:
    LongTerm(string fName="",string lName="",int = 0,int = 0);
    void deposit(int);
    bool withdraw(int);
    int benefit();
private:
    int annualInterest;
    int balance;
    int firstBalance;
};

#endif // LONGTERM_H_INCLUDED
