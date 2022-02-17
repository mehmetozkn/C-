#include <iostream>
using namespace std;

int normalFactorial(int num)
{
    int result = 1;
    for(int i = 2 ; i <= num ; i++)
    {
        result *= i; 
    }
    return result;
}

int recursiveFactorial(int num)
{
    int result = 1;
    if(num == 1) return 1;
    else return num * recursiveFactorial(num-1);

}

int main()
{
    int number;
    cout << "Number : ";
    cin >> number;

    cout << "Result = " << normalFactorial(number) << endl;
    cout << "Result = " << recursiveFactorial(number) << endl;


}