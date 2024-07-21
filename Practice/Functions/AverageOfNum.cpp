#include <iostream>
using namespace std;

static int Num1, Num2, Num3;

void GetNum()
{
    cout << "Enter 1st Number : ";
    cin >> Num1;
    cout << "Enter 2nd Number : ";
    cin >> Num2;
    cout << "Enter 3rd Number : ";
    cin >> Num3;
}

int Averagee()
{
    return (Num3 + Num2 + Num1) / 3;
}

int main()
{

    GetNum();
    cout << "The Average of Numbers " << Num1 << " , " << Num2 << " , " << Num3 << " is : " << Averagee();
    return 0;
}