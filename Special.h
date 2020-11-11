#ifndef SPECIAL_H_INCLUDED
#define SPECIAL_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
#include "Account.h"

using namespace std;

class Special : public Account
{
public:
    Special(string fName="",string lName="",int = 0,int = 0);
    int getBalance();
    void deposit(int);
    bool withdraw(int);
    int benefit();
private:
    int annualInterest;
    int balance;
    int firstBalance;

};
#endif // SPECIAL_H_INCLUDED
