#include <iostream>
#include <math.h>

using namespace std;

int mutlak(int x){
    if(x < 0) return x*-1;
    else return x;
}

double mutlak(double x){
    if(x < 0) return x*-1;
    else return x;
}

int main()
{   
    cout << "|-2| = " << mutlak(2) << endl;
    cout << "|-2.7| = " << mutlak(-2.7) << endl;
   

        return 0;
}