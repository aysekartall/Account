#include <iostream>
#include "Bank.h"
#include "Account.h"
#include "ShortTerm.h"
#include "LongTerm.h"
#include "Special.h"
#include "Current.h"

using namespace std;

Bank b;

void menu()
{
    int girdi;
    cout<<"Hesap eklemek icin 1'i seciniz\nPara yatirmak icin 2'yi seciniz\nPara cekmek icin 3'u seciniz"<<endl;
    cin>>girdi;
    int miktar,ID;
    int hesapTuru;
    switch(girdi)
    {
        Account *ptr;
    case 1:
        {
            cout<<"ShortTerm icin 1'i\nLongTerm icin 2'yi\nSpecial icin 3'u\nCurrent icin 4'u seciniz"<<endl;
            cin>>hesapTuru;
            string isim,soyisim;
            cout<<"Lutfen isminizi giriniz: ";
            cin>>isim;
            cout<<"Lutfen soyisminizi giriniz: ";
            cin>>soyisim;
            cout<<"Lutfen ID'nizi giriniz: ";
            cin>>ID;
            cout<<"Lutfen yatiracaginiz miktari giriniz: ";
            cin>>miktar;
            if(hesapTuru==1)
            {
                ShortTerm obj(isim,soyisim,miktar,ID);
                ptr=&obj;
                b.addAccount(*ptr);
            }
            else if(hesapTuru=2)
            {
                LongTerm obj2(isim,soyisim,miktar,ID);
                ptr=&obj2;
                b.addAccount(*ptr);
            }
            else if(hesapTuru==3)
            {
                Special obj3(isim,soyisim,miktar,ID);
                ptr=&obj3;
                b.addAccount(*ptr);
            }
            else if(hesapTuru==4)
            {
                Current obj4(isim,soyisim,miktar,ID);
                ptr=&obj4;
                b.addAccount(*ptr);
            }
            break;
        }
    case 2:
        {
            cout<<"Islem yapilacak ID:";
            cin>>ID;
            cout<<"Yatirmak istediginiz miktari giriniz:";
            cin>>miktar;
            b.deposit(ID,miktar);
            break;
        }
    case 3:
        {
             cout<<"Islem yapilacak ID:";
            cin>>ID;
            cout<<"Cekmek istediginiz miktari giriniz:";
            cin>>miktar;
            b.withdraw(ID,miktar);
            break;
        }
        }
        menu();
    }

int main()
{
    menu();
    return 0;
}
