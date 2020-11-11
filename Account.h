#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

#include <iostream>
#include <ctime>
//#include <string> simge
#include <iomanip>

using namespace std;

class Account //abstract ana sinifimiz
{
public:
    Account(string cfName="",string clName="",int=0,int=0,int=0);//constructor default degerleriyle tanimladim
    //constructor public kisminda olmali
    void setFirstName(string fName);
    void setLastName(string lName);
    string getFirstName();
    string getLastName();
    int getID(); //hesap no getir
    int getBalance(); // bakiye getir
    int getFirstBalance(); //ilk bakiyesini getir
    int getClassType();
    void deposit(int); //para yatir
    void withdraw(int); //para cek
    void benefit(tm tarih,int annualInterest); //hesap acilis tarihi
private:
    string firstName;
    string lastName;
    int ID;
    string hesapOzet[50];
    int balance;
    int firstBalance;
    int classType;
};

#endif // ACCOUNT_H_INCLUDED
