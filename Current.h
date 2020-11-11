#ifndef CURRENT_H_INCLUDED
#define CURRENT_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
#include "Account.h"

using namespace std;

class Current : public Account
{
public:
    Current(string fName="",string lName="",int = 0,int = 0);
    int getID();
    void deposit(int);
    bool withdraw(int);
    int benefit();
private:
    int balance;
    int firstBalance;

};
#endif // CURRENT_H_INCLUDED
