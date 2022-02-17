#include <iostream>

using namespace std;

inline long karesi(long a)
{
    return (a * a);
}
int main()
{
    char devam;
    long sayi;


    do{
        cout << "Sayi : ";
        cin >> sayi;
        cout << sayi << "'nin Karesi = " << karesi(sayi) << endl;
        cout << "Devam Etmek Istiyor Musunuz (e/h) = ";
        cin >> devam;

    }
    while (devam == 'e' || devam == 'E');
    
        
    

    return 0;
}