#include <iostream>
#include <conio.h>
#include <string>

#include "Bank.h"
#include "Account.h"
#include "ShortTerm.h"
#include "LongTerm.h"
#include "Special.h"
#include "Current.h"

using namespace std;

void Bank::getAccount()
{
    for(int i=0;i<hesapSayisi;i++)
    {
        cout<<"Bakiye: " << accounts[i]->getBalance() << endl;
    }
}
void Bank::addAccount(Account acc)
{
    accounts[hesapSayisi]=&acc;
    hesapSayisi++;
}

bool Bank::deposit(int ID,int cash)
{
    for(int i=0;i<hesapSayisi;i++)
    {
        if(accounts[i]->getID()==ID)
            {
                accounts[i]->deposit(cash);
                return true;
            }
    }
}

bool Bank::withdraw(int ID,int cash)
{
    for(int i=0;i<hesapSayisi;i++)
    {
        if(accounts[i]->getID()==ID)
            return true;
    }
}

int Bank::sortition(int len)
{

}
