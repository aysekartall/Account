#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

#include "ShortTerm.h"
#include "Account.h"

using namespace std;

ShortTerm::ShortTerm(string fName,string lName,int b,int ID):Account(fName,lName,ID,b)
{
    annualInterest=17;
}

int ShortTerm::getBalance()
{
    return Account::getBalance();
}

void ShortTerm::deposit(int dps)
{
    cout<<"Islem gerceklestirildi";
    Account::deposit(dps);
}

bool ShortTerm::withdraw(int wth)
{
    if((Account::getBalance()-wth)>1000)
    {
        Account::withdraw(wth);
        return true;
    }
    cout<<"Para cekme gerceklestirilemez"<<endl;
        return false;
}

int ShortTerm::benefit()
{
    return 1;
}
