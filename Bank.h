#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <ctime>

#include "Account.h"

using namespace std;

class Bank
{
public:
    void getAccount(); //hesap getir
    void getDate(); //tarih getir
    bool deposit(int,int);
    bool withdraw(int,int);
    bool IDDogruMu(int id); //id kontrol
    int sortition(int);
    bool isEmpty();
    void faizHesaplama();
    void addAccount(Account acc); //hesap ekle
private:
    Account *accounts[100]; // pointer türünden dizi
    int hesapSayisi=0;
};

#endif // BANK_H_INCLUDED
