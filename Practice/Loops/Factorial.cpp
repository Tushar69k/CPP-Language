#include <iostream>
using namespace std;

int main()
{
    int num;
    int fact = 1;

    cout << "Enter number for Factorial : ";
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        fact = fact * i;
    }

    cout << "The Factorial of " << num << " is : " << fact;

    return 0;
}

/*
    Factorial Number Program in Cpp
    num! = num * (num-1) * (num-2) * ... 2 * 1
*/
