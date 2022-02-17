#ifndef TARIH_H
#define TARIH_H

class Tarih
{
private:
    int day;
    int month;
    int year;

public:
    Tarih(int d = 1, int m = 1, int y = 2021);
    // Constructor Function. Default olarak 1/1/2021.
    // Herhangi bi deger gönderilmesse bu degerler geçerli olacak.

    void ayarla(int d, int m, int y);
    void yaz();
};
#endif
