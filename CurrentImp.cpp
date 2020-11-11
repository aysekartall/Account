#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
#include "Account.h"
#include "Current.h"

using namespace std;

Current::Current(string fName,string lName,int b,int ID):Account(fName,lName,ID)
{
    balance = b;
    firstBalance=balance;
}

void Current::deposit(int dps)
{
    balance+=dps;
    cout<<"Islem gerceklestirildi";
}

bool Current::withdraw(int wth)
{
    if((Account::getBalance()-wth)>0)
    {
        balance-=wth;
        return true;
    }
    cout<<"Para cekme gerceklestirilemez!";
        return false;
}

int Current::benefit()
{
    return 1;
}
