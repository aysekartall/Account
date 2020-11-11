#include <iostream>
#include <conio.h>
#include <cstring>
#include <sstream>
#include <iomanip>

#include "Account.h"

using namespace std;

Account::Account(string cfName,string clName,int gID,int gbalance,int gclassType) //Abstract sinif
{
    firstName = cfName;
    lastName = clName;
    ID=gID;
    balance=gbalance;
    firstBalance=balance;
    classType=gclassType;
}

void Account::setFirstName(string fName)
{
    firstName=fName;
}

void Account::setLastName(string lName)
{
    lastName=lName;
}

string Account::getFirstName()
{
    return firstName;
}

string Account::getLastName()
{
    return lastName;
}

int Account::getID()
{
    return ID;
}

int Account::getBalance()
{
    return balance; //bakiyeyi dondur
}

int Account::getFirstBalance()
{
    return firstBalance; //ilk bakiyeyi döndür
}

int Account::getClassType()
{
    return classType;
}

void Account::deposit(int dps)
{
    balance+=dps; //bakiyeye yatirilan parayi ekle
    std::string out_string;
    std::stringstream strstrm;
    strstrm << dps;
    out_string = strstrm.str();
    string yIslem = out_string + " TL yatirildi.";
    if(hesapOzet[0]=="")
        hesapOzet[0] = yIslem;
    else
    {
        int i=0;
        while(hesapOzet[i]!="")
        {
            i++;
        }
        hesapOzet[i] = yIslem;
    }
    cout << yIslem << endl;

}

void Account::withdraw(int wth)
{
    balance-=wth; //bakiyeden cekilen parayi çikar
    std::string out_string;
    std::stringstream strstrm;
    strstrm << wth;
    out_string = strstrm.str();
    string yIslem = out_string + " TL cekildi.";
    if(hesapOzet[0]=="")
        hesapOzet[0] = yIslem;
    else
    {
        int i=0;
        while(hesapOzet[i]!="")
        {
            i++;
        }
        hesapOzet[i] = yIslem;
    }
    cout << yIslem << endl;
}
