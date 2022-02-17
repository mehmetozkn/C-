
#include <iostream>
#include "tarih.h" // Arayüz koda dahil ediliyor.
using namespace std;

Tarih::Tarih(int d, int m, int y)
{
    ayarla(d, m, y);
}


void Tarih::ayarla(int d, int m, int y)
{
    if (d > 0 && d < 32)
    {
        day = d;
    }
    else
    {
        day = 1;
    }

    if (m > 0 && m < 13)
    {
        month = m;
    }
    else
    {
        month = 1;
    }

    year = y;
}

void Tarih::yaz()
{
    cout << "Day = " << day << "\nMonth = " << month << "\nYear = " << year << endl
         << "------------" << endl;
}
