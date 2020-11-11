#include <iostream>
#include <conio.h>
#include <string>
#include "Account.h"
#include "Special.h"

using namespace std;

Special::Special(string fName,string lName,int b,int ID):Account(fName,lName,ID)
{
    balance = b;
    firstBalance=balance;
    annualInterest=12;
}

int Special::getBalance()
{
    return Account::getBalance();
}

void Special::deposit(int dps)
{
    Account::deposit(dps);
    cout<<"islem ger�eklestirildi";
}

bool Special::withdraw(int wth)
{
    if((Account::getBalance()-wth)>Account::getFirstBalance())
    //hesaptaki bakiyeden �ekilecek miktar �iktiginda ilk bakiyeden b�y�kse
    {
        Account::withdraw(wth);
        return true;
    }
    cout<<"Para cekme gerceklestirilemez!"<<endl;
        return false;
}

int Special::benefit()
{
    return 1;
}
