#include <iostream>
#include <math.h>

using namespace std;
// Kullanıcıdan alınan 2 noktanın kordinatlarına göre aralarındaki mesafeyi hesaplayan program.
double mesafe(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((x1-x2),2) + pow((y1-y2),2));
}

int main()
{
    int x1, y1, x2, y2;
    cout << "x1 = ";
    cin >> x1;
    cout << endl << "y1 = ";
    cin >> y1;
    cout << endl << "x2 = ";
    cin >> x2;
    cout << endl << "y2 = ";
    cin >> y2;
    cout << endl << "(" << x1 << ", " << y1 << ") ile (" << x2 << ", " << y2 << ") arasindaki mesafe = " <<
    mesafe(x1, y1, x2, y2) << endl; 

        return 0;
}