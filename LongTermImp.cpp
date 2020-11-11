#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
#include "Account.h"//gerek yok
#include "LongTerm.h"

using namespace std;

LongTerm::LongTerm(string fName,string lName,int b,int ID):Account(fName,lName,ID)
{
    balance = b;
    firstBalance=balance;
    annualInterest=24;
}

void LongTerm::deposit(int dps)
{
    cout<<"Islem gerçeklestirildi";
    balance+=dps;
}

bool LongTerm::withdraw(int wth)
{
    if((Account::getBalance()-wth)>1500)
    {
        balance-=wth;
        return true;
    }
    cout<<"Para cekme gerceklestirilemez"<<endl;
        return false;
}

int LongTerm::benefit()
{
    return 1;
}

