
#include <iostream>
#include "tarih.cpp" // Arayüz koda dahil ediliyor.

int main()
{
    Tarih a; // Parametre yok varsayılan değerler kullanılır.

    Tarih b(12); // Sadece day var diğerleri varsayılan değerler olacak.

    Tarih c(18, 5); // Sadece day ve month var. Year değeri varsayılan olacak.
    
    Tarih d(18, 5,2007);

    a.yaz();
    b.yaz();
    c.yaz();
    d.yaz();

    return 0;

}
